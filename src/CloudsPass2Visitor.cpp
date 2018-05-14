#include <iostream>
#include <string>

#include "CloudsPass2Visitor.h"
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/symtabimpl/Predefined.h"

using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;

CloudsPass2Visitor::CloudsPass2Visitor(ostream& j_file)
    : program_name(""), j_file(j_file)
{
}

CloudsPass2Visitor::~CloudsPass2Visitor() {}

antlrcpp::Any CloudsPass2Visitor::visitProgram(CloudsParser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);
    return value;
}

antlrcpp::Any CloudsPass2Visitor::visitHeader(CloudsParser::HeaderContext *ctx)
{
    program_name = "collisionengine/" + ctx->ID()->toString();
    return visitChildren(ctx);
}

antlrcpp::Any CloudsPass2Visitor::visitFunction(CloudsParser::FunctionContext *ctx)
{
    func_locals = 0;
    j_file << "\n\n.method private static ";
    auto value = visitChildren(ctx);

    j_file << "\t";

    if(ctx->functionInit()->return_type() != nullptr){
        string type_name = ctx->functionInit()->return_type()->TYPE()->toString();
        if(type_name == "int"){
            j_file << "i";
        }
        else if(type_name == "float"){
            j_file << "f";
        }
        else if(type_name == "cube"){
            j_file << "a";
        }
        else if(type_name == "sphere"){
            j_file << "a"; 
        }
        else if(type_name == "cylinder"){
            j_file << "a";
        }
        else {
            j_file << "?";
        }
    }

    j_file << "return\n";

    j_file << "\n.limit locals " << func_locals+6 << endl;
    j_file << ".limit stack 50\n";
    j_file << ".end method\n\n";

    return value;
}

antlrcpp::Any CloudsPass2Visitor::visitFunctionInit(CloudsParser::FunctionInitContext *ctx)
{
    string type_name;
    j_file << ctx->ID()->toString() << "(";
    for(auto init_var: ctx->init_var()){
        func_locals++;
        type_name = init_var->TYPE()->toString();
        if(type_name == "int"){
            j_file << "I";
        }
        else if(type_name == "float"){
            j_file << "F";
        }
        else if(type_name == "cube"){
            j_file << "Lcollisionengine/RectPrism;";
        }
        else if(type_name == "sphere"){
            j_file << "Lcollisionengine/Sphere;" ;
        }
        else if(type_name == "cylinder"){
            j_file << "Lcollisionengine/Cylinder;";
        }
        else {
            j_file << "?";
        }
    }
    j_file << ")";

    if(ctx->return_type() != nullptr){
        type_name = ctx->return_type()->TYPE()->toString();
        if(type_name == "int"){
            j_file << "I";
        }
        else if(type_name == "float"){
            j_file << "F";
        }
        else if(type_name == "cube"){
            j_file << "Lcollisionengine/RectPrism;";
        }
        else if(type_name == "sphere"){
            j_file << "Lcollisionengine/Sphere;"; 
        }
        else if(type_name == "cylinder"){
            j_file << "Lcollisionengine/Cylinder;";
        }
        else {
            j_file << "?";
        }
    }
    else {
        j_file << "V";
    }
    j_file << "\n";

    return visitChildren(ctx);    

}

antlrcpp::Any CloudsPass2Visitor::visitBody(CloudsParser::BodyContext *ctx)
{
    j_file << endl;
    j_file << ".method public static main([Ljava/lang/String;)V" << endl;
    j_file << endl;
    j_file << "\tnew RunTimer" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual RunTimer/<init>()V" << endl;
    j_file << "\tputstatic        " << program_name
           << "/_runTimer LRunTimer;" << endl;
    j_file << "\tnew PascalTextIn" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual PascalTextIn/<init>()V" << endl;
    j_file << "\tputstatic        " + program_name
           << "/_standardIn LPascalTextIn;\n" << endl;

    auto value = visitChildren(ctx);

    // Emit the main program epilogue.
    j_file << endl;
    j_file << "\tgetstatic     " << program_name
               << "/_runTimer LRunTimer;" << endl;
    j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
    j_file << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 16" << endl;
    j_file << ".limit stack 16" << endl;
    j_file << ".end method" << endl;

    return value;
}
antlrcpp::Any CloudsPass2Visitor::visitBlock(CloudsParser::BlockContext *ctx)
{
    return visitChildren(ctx);

}

antlrcpp::Any CloudsPass2Visitor::visitEnvironments(CloudsParser::EnvironmentsContext *ctx)
{
    current_environment_name = ctx->ID()->toString();
    j_file << "\tnew collisionengine/CollisionEngine\n\tdup\n";
    j_file << "\tldc 100\n" << "\tldc 100\n" << "\tldc 100\n";
    j_file << "\tinvokenonvirtual collisionengine/CollisionEngine/<init>(III)V\n";
    j_file << "\tputstatic\t" << program_name << "/" << current_environment_name<< "Engine Lcollisionengine/CollisionEngine;\n";

  
  /* //without collisionEngine class 
    j_file << "\tmultianewarray [[[I 3\n";
    j_file << "\tputstatic " << program_name << "/" 
                << current_environment_name << " " << "[[[I\n" << endl;
   */
    return visitChildren(ctx);
}



antlrcpp::Any CloudsPass2Visitor::visitStat(CloudsParser::StatContext *ctx)
{
    j_file << endl << "; " + ctx->getText() << endl << endl;

    return visitChildren(ctx);
}

antlrcpp::Any CloudsPass2Visitor::visitAssignment_stmt(CloudsParser::Assignment_stmtContext *ctx)
{
    auto value = visit(ctx->expr());
   
    string type_indicator;   
    string variable_name;                                                   
    if(ctx->variable()->obj_vars() == nullptr){
        type_indicator =
                  (ctx->variable()->type == Predefined::integer_type) ? "I"
                : (ctx->variable()->type == Predefined::real_type)    ? "F"
                :                                                       "?";
    
        // Emit a field put instruction.
        j_file << "\tputstatic\t" << program_name
            << "/" << ctx->variable()->ID()->toString()
            << " " << type_indicator << endl;
    }
    else{
        auto type_name = ctx->variable()->variable()->type;
        variable_name = ctx->variable()->variable()->ID()->toString();
        jas_type = "";

        if(type_name == Predefined::RectPrism_type){
            jas_type = "RectPrism";
        }
        else if(type_name == Predefined::Sphere_type){
            jas_type = "Sphere";
        }
        else if(type_name == Predefined::Cylinder_type){
            jas_type = "Cylinder";
        }
        else { jas_type = "?";}

        auto expr_type = ctx->expr()->type;
        string param_name;

         if(type_name == Predefined::integer_type){
                param_name = "I";
            }
            else if(type_name == Predefined::real_type){
                param_name = "F";
            }


        string objvar_name = ctx->variable()->obj_vars()->getText(); 

         j_file << "\tgetstatic\t" << program_name
                << "/" << variable_name << " Lcollisionengine/" << jas_type << ";\n" << endl;
        j_file << "\tinvokevirtual collisionengine/" << jas_type << ".set" << objvar_name << "(" << param_name << ")I\n";
        
    }

    return value;
}

antlrcpp::Any CloudsPass2Visitor::visitInit_stmt(CloudsParser::Init_stmtContext *ctx)
{
    string var_type = ctx->init_var()->TYPE()->toString();
    var_name = ctx->init_var()->variable()->ID()->toString();
    init_param = "";
    jas_type = "";

/*
    for(auto ex: ctx->init_list()->expr()){

    }
*/
    
    if(var_type == "cube"){
        jas_type += "RectPrism";
        j_file << "\tnew collisionengine/" << jas_type << "\n\tdup\n";
    }
    //SPhere has radius
    else if(var_type == "sphere"){
        jas_type += "Sphere"; //array (not sure)
        j_file << "\tnew collisionengine/" << jas_type << "\n\tdup\n";

    }
    //cylinder (radius, height)
    else if(var_type == "cylinder"){
        jas_type += "Cylinder"; //array (not sure)
        j_file << "\tnew collisionengine/" << jas_type << "\n\tdup\n";
        
    }
    /*
    else if(var_type == "tetra"){
        jas_type = "[I"; //array (not sure)
    }
    */
    else if(var_type == "point"){
       jas_type += "Point"; //array (not sure)
        j_file << "\tnew collisionengine/" << jas_type << "\n\tdup\n";

    }
    
    auto value = visitChildren(ctx);

    if(var_type == "int")
    {
        j_file << "\tputstatic\t" << program_name
           << "/" << var_name
           << " I"  << endl;
    }
    else if(var_type == "float")
    {
        j_file << "\tputstatic\t" << program_name
           << "/" << var_name
           << " F"  << endl;
    }
    else if(var_type == "cube" || var_type == "sphere"
            || var_type == "cylinder"){
        j_file << "\tinvokenonvirtual collisionengine/" << jas_type << "/<init>(" << init_param << ")V\n";
        j_file << "\tdup\n";
        j_file << "\tputstatic " << program_name << "/" << var_name << " Lcollisionengine/" << jas_type << ";\n";
        j_file << "\tldc \"" << var_name << "\"\n";
        j_file << "\tinvokevirtual collisionengine/" << jas_type << "/setName(Ljava/lang/String;)V\n";
    }
    else if(var_type == "point" ){
        j_file << "\tinvokenonvirtual collisionengine/" << jas_type << "/<init>(" << init_param << ")V\n";
        j_file << "\tputstatic " << program_name << "/" << var_name << " Lcollisionengine/" << jas_type << ";\n";

    }
    j_file << endl;


    return value;
}


antlrcpp::Any CloudsPass2Visitor::visitInit_list(CloudsParser::Init_listContext *ctx)
{
    //MIGHT NEED TO ADD SUPPORT SO ORDER OF VARIABLES DOESN"T MATTER
    /*
    string number;
     for(int counter = 0; counter < var_size; counter++){
        number = ctx->expr(counter)->getText();
        j_file << "\tgetstatic " << program_name << "/" << var_name << " " << jas_type <<endl;
        j_file << "\tldc\t" << counter << endl;
        j_file << "\tldc\t" << number << endl;//change to support multidimensional arrays
        j_file << "\tiastore\n" << endl;
    }
    */
    return visitChildren(ctx);;

}

antlrcpp::Any CloudsPass2Visitor::visitObj_vars(CloudsParser::Obj_varsContext *ctx)
{
    init_param+="I";//check type of expr later
    
    return visitChildren(ctx);;

}

antlrcpp::Any CloudsPass2Visitor::visitPut_stmt(CloudsParser::Put_stmtContext *ctx)
{
    string put_var_name = ctx->variable()->ID()->toString();
    string put_point_name = ctx->ID()->toString();
    auto put_var_type = ctx->variable()->type; 
    int put_var_number = 0;

    j_file << "\tgetstatic " << program_name << "/" << current_environment_name << "Engine Lcollisionengine/CollisionEngine;\n";
    j_file << "\tgetstatic " << program_name << "/" << put_var_name << " Lcollisionengine/";
    if(put_var_type == Predefined::RectPrism_type){
        j_file << "RectPrism";
    }
    else if(put_var_type == Predefined::Sphere_type){
        j_file << "Sphere";
    }
    else if(put_var_type == Predefined::Cylinder_type){
        j_file << "Cylinder";
    }
    else { j_file << "?";}

    j_file << ";\n\tgetstatic " << program_name << "/" << put_point_name << " Lcollisionengine/Point;\n";

    j_file << "\tinvokevirtual collisionengine/CollisionEngine/addObject(Lcollisionengine/ThreeDObject;Lcollisionengine/Point;)V\n";


    /*
    for(int counter = 0; counter <3; counter++){
        j_file << "\tgetstatic\t" << program_name <<"/"<< put_var_name << "center [I\n";
        j_file << "\tldc\t" << counter << endl;
        j_file << "\tldc\t0" <<endl;
        j_file << "\tiastore\n" << endl;
    }
    */
    
/*
    j_file << "\tgetstatic\t" << program_name << "/" << current_environment_name << " [[[I" <<endl;
    j_file << "\tldc 50\n" << "\taaload\n"
            << "\tldc 50\n" << "\taaload\n"
            << "\tldc 50\n";
    if(put_var_name == "cubeobject"){
        put_var_number =1;
    }
    j_file << "\tldc\t" << put_var_number <<endl; //1 represents cube, make general later
    j_file << "\tiastore" << endl;
*/
    return visitChildren(ctx);

}

antlrcpp::Any CloudsPass2Visitor::visitWait_stmt(CloudsParser::Wait_stmtContext *ctx)
{ //for loop in assembly
    numberOfWaitStmt++;

    j_file << "\tldc 0\n";
    j_file << "\tistore_3\n";
    auto value = visitChildren(ctx);
    j_file << "\tistore_2\n";
    //outer for begin
    j_file << "WAIT_STMT" << numberOfWaitStmt << "LOOP1:\n";
    j_file << "\tgetstatic " << program_name << "/" << current_environment_name << "Engine Lcollisionengine/CollisionEngine;\n";
    j_file << "\tinvokevirtual collisionengine/CollisionEngine.timestep()[I\n";
    j_file << "\tldc 0\n";
    j_file << "\tistore 4\n";
    j_file << "\tgetstatic " << program_name << "/" << current_environment_name << "Engine Lcollisionengine/CollisionEngine;\n";
    j_file << "\tinvokevirtual collisionengine/CollisionEngine.getNumCollisionHandles()I\n";
    j_file << "\tistore 5\n";
    //inner for begin
    j_file << "WAIT_STMT" << numberOfWaitStmt << "LOOP2:\n";
    j_file << "\tdup\n";
    j_file << "\tiload 4\n";
    j_file << "\tiaload\n";
    j_file << "\tldc 0\n";
    j_file << "\tifeq WAIT_STMT" << numberOfWaitStmt << "_NO_HANDLE\n";//assuming one to handle
    j_file << "\tinvokestatic " << program_name << "/handleCollision(I)V\n";
    j_file << "\tldc 0\n";
    j_file << "WAIT_STMT" << numberOfWaitStmt << "_NO_HANDLE:\n";
    j_file << "\tpop\n";

    j_file << "\tiinc 4 1\n";
    j_file << "\tiload 5\n";
    j_file << "\tifeq " << "WAIT_STMT" << numberOfWaitStmt << "LOOP2\n";
    j_file << "\tpop\n";
    //end inner loop



    j_file << "\tiinc 3 1\n";
    j_file << "\tiload_2\n";
    j_file << "\tifeq " << "WAIT_STMT" << numberOfWaitStmt << "LOOP1\n";
    //end outerfor loop


    //for loop with if stmt checking if each one is zero, if not, call handleCollision(I)V


    //in if


    return value;

}    

antlrcpp::Any CloudsPass2Visitor::visitMove_stmt(CloudsParser::Move_stmtContext *ctx)
{
    string move_params = "";
    string move_var_name = ctx->variable()->ID()->toString();
    string move_point_name = ctx->point_var()->ID()->toString(); // check if null in future
    auto move_type_name = ctx->variable()->type;
    jas_type = "";

    if(move_type_name == Predefined::RectPrism_type){
        jas_type = "RectPrism";
    }
    else if(move_type_name == Predefined::Sphere_type){
        jas_type = "Sphere";
    }
    else if(move_type_name == Predefined::Cylinder_type){
        jas_type = "Cylinder";
    }
    else { jas_type = "?";}

    for(auto e: ctx->expr()){
        move_params += "I";
    }

    if (move_params == "II")
    {
        j_file << "\tgetstatic " << program_name << "/" << current_environment_name << "Engine Lcollisionengine/CollisionEngine;\n";
    }

    j_file << "\tgetstatic " << program_name << "/" << move_var_name << " Lcollisionengine/" << jas_type << ";\n";
    j_file << "\tgetstatic " << program_name << "/" << move_point_name << " Lcollisionengine/Point;\n";

    auto value = visitChildren(ctx);

    if(move_params == "I")
    {
        j_file << "\tinvokevirtual collisionengine/ThreeDObject.move(Lcollisionengine/Point;I)V\n";
    }
    else if(move_params == "II")
    { 
        j_file << "\tinvokevirtual collisionengine/ThreeDObject.move(Lcollisionengine/ThreeDObject;Lcollisionengine/Point;II)V\n";
    }

    return value;

}

antlrcpp::Any CloudsPass2Visitor::visitRotation_stmt(CloudsParser::Rotation_stmtContext *ctx)
{
    string var_name = ctx->variable()->ID()->toString();
    string rot_op_name = ctx->rot_op()->getText(); // check if null in future
    auto type_name = ctx->variable()->type;
    jas_type = "";

    if(type_name == Predefined::RectPrism_type){
        jas_type = "RectPrism";
    }
    else if(type_name == Predefined::Sphere_type){
        jas_type = "Sphere";
    }
    else if(type_name == Predefined::Cylinder_type){
        jas_type = "Cylinder";
    }
    else { jas_type = "?";}

    j_file << "\tgetstatic " << program_name << "/" << var_name << " Lcollisionengine/" << jas_type << ";\n";

    auto value = visitChildren(ctx);

    j_file << "\tinvokevirtual collisionengine/ThreeDObject.rotate(I)V\n";

    return value;

}

antlrcpp::Any CloudsPass2Visitor::visitFunctionCall(CloudsParser::FunctionCallContext *ctx)
{
    auto value = visitChildren(ctx);

    j_file << "\tinvokestatic " << program_name << "/" << ctx->ID()->toString() << "(";

    if(ctx->expr(0)!= nullptr){
        auto type_name = ctx->expr(0)->type;

        for(auto ex: ctx->expr()){
            if(type_name == Predefined::integer_type){
                j_file << "I";
            }
            else if(type_name == Predefined::real_type){
                j_file << "F";
            }
            else if(type_name == Predefined::RectPrism_type){
                j_file << "Lcollisionengine/RectPrism;";
            }
            else if(type_name == Predefined::Sphere_type){
                j_file << "Lcollisionengine/Sphere;" ;
            }
            else if(type_name == Predefined::Cylinder_type){
                j_file << "Lcollisionengine/Cylinder;";
            }
            else {
                j_file << "?";
            }
        }
    }
    

    j_file << ")";

    auto func_type_name = ctx->type;
    if(func_type_name == Predefined::integer_type){
        j_file << "I";
    }
    else if(func_type_name == Predefined::real_type){
        j_file << "F";
    }
    else if(func_type_name == Predefined::RectPrism_type){
        j_file << "Lcollisionengine/RectPrism;";
    }
    else if(func_type_name == Predefined::Sphere_type){
        j_file << "Lcollisionengine/Sphere;" ;
    }
    else if(func_type_name == Predefined::Cylinder_type){
        j_file << "Lcollisionengine/Cylinder;";
    }
    else {
        j_file << "V";
    }
    j_file << "\n";

    return value;

}

antlrcpp::Any CloudsPass2Visitor::visitWhen_stmt(CloudsParser::When_stmtContext *ctx)
{
    j_file << "\tgetstatic " << program_name << "/" << current_environment_name<< "Engine Lcollisionengine/CollisionEngine;\n";

    auto value = visitChildren(ctx);


    j_file << "\tinvokevirtual collisionengine/CollisionEngine.addCollision(Lcollisionengine/ThreeDObject;Lcollisionengine/ThreeDObject;)V\n";

    return value;

}



antlrcpp::Any CloudsPass2Visitor::visitIntegerConst(CloudsParser::IntegerConstContext *ctx)
{
    // Emit a load constant instruction.
    j_file << "\tldc\t" << ctx->getText() << endl;

    return visitChildren(ctx);
}

antlrcpp::Any CloudsPass2Visitor::visitExprvariable(CloudsParser::ExprvariableContext *ctx)
{

    string variable_name;
    string objvar_name = "?";
  
    if(ctx->variable()->obj_vars() != nullptr) 
    { 
        auto type_name = ctx->variable()->variable()->type;
        variable_name = ctx->variable()->variable()->ID()->toString();
        jas_type = "";

        if(type_name == Predefined::RectPrism_type){
            jas_type = "RectPrism";
        }
        else if(type_name == Predefined::Sphere_type){
            jas_type = "Sphere";
        }
        else if(type_name == Predefined::Cylinder_type){
            jas_type = "Cylinder";
        }
        else { jas_type = "?";}

        objvar_name = ctx->variable()->obj_vars()->getText(); 

         j_file << "\tgetstatic\t" << program_name
                << "/" << variable_name << " Lcollisionengine/" << jas_type << ";\n" << endl;
        j_file << "\tinvokevirtual collisionengine/" << jas_type << ".get" << objvar_name << "()I\n";
        
        
    }
    else 
    {
        auto type_name = ctx->variable()->type;
        variable_name = ctx->variable()->ID()->toString();
        if(type_name == Predefined::RectPrism_type){
            jas_type = "Lcollisionengine/RectPrism;";
        }
        else if(type_name == Predefined::Sphere_type){
            jas_type = "Lcollisionengine/Sphere;";
        }
        else if(type_name == Predefined::Cylinder_type){
            jas_type = "Lcollisionengine/Cylinder;";
        }
        else { 
            jas_type = (type_name == Predefined::integer_type) ? "I"
                                : (type_name == Predefined::real_type)    ? "F"
                                :                                      "?";
        }   

        // Emit a field get instruction.
        j_file << "\tgetstatic\t" << program_name
            << "/" << variable_name << " " << jas_type << endl;
    
    }

    return visitChildren(ctx);

    
}

/*
antlrcpp::Any CloudsPass2Visitor::visitAdd_Sub_op(CloudsParser::Add_sub_opContext *ctx)
{
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    string op = ctx->add_sub_op()->getText();
    string opcode;

    if (op == "+")
    {
        opcode = integer_mode ? "iadd"
               : real_mode    ? "fadd"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "isub"
               : real_mode    ? "fsub"
               :                "????";
    }

    // Emit an add or subtract instruction.
    j_file << "\t" << opcode << endl;

    return value;
}

antlrcpp::Any CloudsPass2Visitor::visitMul_div_op(CloudsParser::Mul_div_opContext *ctx)
{
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    string op = ctx->mul_div_op()->getText();
    string opcode;

    if (op == "+")
    {
        opcode = integer_mode ? "imul"
               : real_mode    ? "fmul"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "idiv"
               : real_mode    ? "fdiv"
               :                "????";
    }

    // Emit an add or subtract instruction.
    j_file << "\t" << opcode << endl;

    return value;
}

antlrcpp::Any CloudsPass2Visitor::visitIf_stmt(CloudsParser::If_stmtContext *ctx)
{   
    //evaluate first boolean expression
    visitChildren(ctx->expr());
    
    //if-then-else
    if (ctx->stmt_list().size() == 2)
    {
        j_file << "\tifeq\tFALSELABEL" << endl;
        visitChildren(ctx->stmt_list(0));
        j_file << "\tgoto\tNEXTLABEL" << endl;
        j_file << "FALSELABEL:" << endl;
        visitChildren(ctx->stmt_list(1));
        j_file << "NEXTLABEL:" << endl;
        }

    //if-then
    else
    {
        j_file << "\tifeq\tLABEL" << endl;
        visitChildren(ctx->stmt_list(0));
        j_file << "LABEL:" << endl;
    }

    return visitChildren(ctx);
}

antlrcpp::Any CloudsPass2Visitor::visitRel_op(CloudsParser::Rel_opContext *ctx)
{
    auto value = visitChildren(ctx);

    string var1 = ctx->expr(0)->ID()->toString();
    string var2 = ctx->expr(1)->ID()->toString();

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    string type_indicator = 
                  (integer_mode) ? "I"
                : (real_mode)    ? "F"
                :                ? "?";

    string op = ctx->rel_op()->getText();
    string opcode;
    
    switch (op)
    {
        case "<":
            opcode = "if_cmlt"
            break;
        case "<=":
            opcode = "if_cmle"
            break;
        case ">":
            opcode = "if_cmgt"
            break;
        case ">=":
            opcode = "if_cmge"
            break;
        case "==":
            opcode = "if_cmeq"
            break;
        case "!=":
            opcode = "if_cmne"
            break;    
        default:
            opcode = "???????"
            break;
    }
    //push values of operands to top of stack
    j_file  << "\tgetstatic\t" << program_name 
            << "/" << var1 << " " << type_indicator << endl;
    j_file  << "\tgetstatic\t" << program_name 
            << "/" << var2 << " " << type_indicator << endl;
    //comparison
    j_file  << "\t" << opcode << "\tL001" << endl;
    //push false
    j_file  << "\ticonst_0" << endl;
    //go to next statement
    j_file  << "\tgoto\tNEXTLABEL" << endl;
    //true section, push true
    j_file  << "L001:" << endl;
    j_file  << "\ticonst_1" << endl;
    //false section, continue
    j_file  << "NEXTLABEL:" << endl;

    return value;
}

antlrcpp::Any CloudsPass2Visitor::visitStmt_list(CloudsParser::Stmt_listContext *ctx)
{
    for (int i = 0; i < ctx->stat().size(); i++)
        visitChildren(ctx->stat(i));
    return visitChildren(ctx);
}

// antlrcpp::Any CloudsPass2Visitor::visitRepeat_stmt(CloudsParser::Repeat_stmtContext *ctx)
// {
//     auto value = visitChldren(ctx);

//     while(ctx->expr() == true)
//     {
//         visitChldren(ctx->stmt_list());
//     }

//     return value;
// }
*/

antlrcpp::Any CloudsPass2Visitor::visitRun_simulation(CloudsParser::Run_simulationContext *ctx)
{
    auto value = visitChildren(ctx);
    string output_var_name = "cubeobject";
/*
    j_file << "\tgetstatic\tjava/lang/System/out Ljava/io/PrintStream;" <<endl;

    j_file << "\tldc\t\"Results of Simulation:";
    

//NOT USING printf
    j_file << "\"\n\tinvokevirtual java/io/PrintStream.println(Ljava/lang/String;)V\n";
    j_file << "\tgetstatic\tjava/lang/System/out Ljava/io/PrintStream;" <<endl;
    j_file << "\tldc\t\"cubeobject at x=\"\n";
    j_file << "\tinvokevirtual java/io/PrintStream.print(Ljava/lang/String;)V\n";

    j_file << "\tgetstatic\tjava/lang/System/out Ljava/io/PrintStream;" <<endl;
    j_file << "getstatic\t"<< program_name << "/"<<output_var_name << "center [I\n"
                <<"ldc\t" << 0 <<"\niaload\n";
    j_file << "\tinvokevirtual java/io/PrintStream.print(Ljava/lang/String;)V\n";
//END NOT USING printf


 // USING printf
    j_file << "\n\tcubeobject at x=%d, y=%d, z=%d\n\"\n";
    j_file << "\ticonst_3\n\tanewarray java/lang/Object\n\tdup\n";
    for(int counter = 0; counter <3; counter ++){
        j_file << "\tldc " << counter << endl;
        j_file << "\tgetstatic\t"<< program_name << "/"<<output_var_name << "center [I\n"
                <<"\tldc\t" << counter <<"\n\tiaload\n";
        j_file << "\tinvokestatic\tjava/lang/Integer.valueOf(I)Ljava/lang/Integer;\n";
        j_file << "\taastore\n";
        if(counter!=2){
            j_file << "\tdup\n";
        }
        
    }
    j_file << "\tinvokevirtual java/io/PrintStream/printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;\npop\n" <<endl;

//END USING printf
*/
    j_file << "\tgetstatic " << program_name << "/" << current_environment_name << "Engine Lcollisionengine/CollisionEngine;\n";
    j_file << "\tinvokevirtual collisionengine/CollisionEngine/printStatus()V\n";
    return value;
    
}