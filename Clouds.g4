grammar Clouds;

program : header block;
header  : CLOUDS ID ';' ;
block   : environments run_simulation ;

//environments: ENVIRNOMENT ID '{' env_stat+ '}'; //use this later
environments: ENVIRNOMENT ID scope;

// run_simulation: SIMULATION '{' sim_stat+ '}'; //use this later
run_simulation: SIMULATION scope;                   
 
 //need to fix this, dont have declarations or compound_stmt defined

//env_stat:   stat; //add other value envirnoment statements

//sim_stat:   ; //add other simulaiton statments



stat : scope    # scope_node
     | assignment_stmt  # assignmentStmt
     | repeat_stmt      # repeatStmt
     | if_stmt          # ifStmt
     | custom_stmt      # customStmt
     |                  # emptyStmt
     ;

scope : '{' stmt_list '}';  
stmt_list       : stat ( NEWLINE stat )* ;
assignment_stmt : variable '=' expr 
                | ID variable '=' expr
                ;
repeat_stmt     : REPEAT stmt_list UNTIL expr ;
if_stmt         : IF expr THEN stat ( ELSE stat )? ;
custom_stmt     : move_stmt     #moveStmt
                | PAUSE         #pause
                | wait_stmt     #waitStmt
                ;


wait_stmt       : WAIT variable;
move_stmt       : MOVE expr TO expr MOVE_3 expr
                | MOVE variable 
                ;

variable: ID;


expr : expr mul_div_op expr     # mulDivExpr
     | expr add_sub_op expr     # addSubExpr
     | expr rel_op expr         # relExpr
     | expr rot_op expr         # rotExpr
     | '[' init_list ']'        # initList
     | number                   # numberConst
     | ID                       # identifier
     | '(' expr ')'             # parens
     ;

init_list   : init_type '=' expr (',' init_type '=' expr)*  ;

init_type   : HEIGHT
            | WIDTH
            | LENGTH
            | RADIUS
            | X 
            | Y 
            | Z 
            ;

expression
    : methodCall
    | ID
    ;

methodCall
    : methodName '(' methodCallArguments ')'
    ;

methodName
    : ID
    ;


methodCallArguments
    : // No arguments
    | expression (',' expression)*  // Some arguments
    ;

number : sign? INT ;
sign   : '+' | '-' ;

mul_div_op : MUL | DIV ; //multiple or divide
add_sub_op : ADD | SUB ; //add or subtract
rel_op     : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ; //relational operators
rot_op     : ROLL_OP | PITCH_OP | YAW_OP ; //rotational operators

//key words
CLOUDS : 'Clouds'  ;
BEGIN   : 'BEGIN'  ;
END     : 'END'    ;
VAR     : 'VAR'    ;
REPEAT  : 'REPEAT' ;
UNTIL   : 'UNTIL'  ;
IF      : 'IF'     ;
THEN    : 'THEN'   ;
ELSE    : 'ELSE'   ;
CENTER  : 'center' ;
TELEPORT : 'teleport' ;
COLISION : 'collision';
PAUSE : 'pause' ;
WAIT : 'wait'   ;
MOVE : 'move' ;
TO  :     'to'  ;
MOVE_3  :   IN    
        |   FOR
        |   AT  
        ;
AT  :   'at';
IN  :   'in';
FOR :   'for';
FINISH : 'finish' ;
PUTNEVN : 'putnevn' ;
FUNCTION : 'function' ;
ENVIRNOMENT : 'environment' ;
SIMULATION : 'simulation' ;

//init keywords
HEIGHT  : 'hieght';
WIDTH   : 'width';
LENGTH  : 'length';
RADIUS  : 'radius';
X       : 'x';
Y       : 'y';
Z       : 'z';

//operators
MUL :   '*' ; // assigns token name to '*' used above in grammar
DIV :   '/' ;
ADD :   '+' ;
SUB :   '-' ;

MUL_EQ :   '*=';
DIV_EQ :   '/=';
ADD_EQ :   '+=';
SUB_EQ :   '-=';

EQ_OP :    '=' ;
NE_OP :    '!=';
LT_OP :    '<' ;
LE_OP :    '<=';
GT_OP :    '>' ;
GE_OP :    '>=';

ROLL_OP : '~R' ; //roll
PITCH_OP :'~P' ; //pitch
YAW_OP :  '~Y' ; //yaw

//types
TYPE:   'sphere'
    |   'cube'
    |   'cylinder'
    |   'cone'
//    |   'tetrahedron'
    ;

ID  :   [a-zA-Z]+ ;      // match identifiers
INT :   [0-9]+ ;         // match integers

NEWLINE:'\r'? '\n' ;     // return newlines to parser (is end-statement signal)
WS  :  [ \t]+ -> skip ; // toss out whitespace
