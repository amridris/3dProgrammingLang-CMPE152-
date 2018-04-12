grammar Clouds;

program : header block '.' ;
header  : CLOUDS ID ';' ;
block   : environments run_simulation ;

environments: ENVIRNOMENT ID '{' env_stat+ '}';

run_simulation: SIMULATION '{' sim_stat+ '}';                   
 
 //need to fix this, dont have declarations or compound_stmt defined

env_stat:   stat; //add other value envirnoment statements

sim_stat:   stat; //add other simulaiton statments

scope : '{' stat+ '}';

stat:   expr NEWLINE                                # printExpr
    |   ID '=' expr NEWLINE                         # assign
    |   TYPE ID ('{' init_list '}')* NEWLINE        # declaration //dont have "init_list" defined yet
    |   NEWLINE                                     # blank
    ;
init_list: ;


expr : expr mul_div_op expr     # mulDivExpr
     | expr add_sub_op expr     # addSubExpr
     | expr rel_op expr         # relExpr
     | expr rot_op expr         # rotExpr
     | number                   # numberConst
     | ID                       # identifier
     | '(' expr ')'             # parens
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
STOP : 'stop' ;
MOVE : 'move' ;
FINISH : 'finish' ;
PUTNEVN : 'putnevn' ;
FUNCTION : 'function' ;
ENVIRNOMENT : 'environment' ;
SIMULATION : 'simulation' ;

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

INIT_TYPE:  'height'
    |       'width'
    |       'radius'
    |       'length'
    |       '3dpoint'
    ;

ID  :   [a-zA-Z]+ ;      // match identifiers
INT :   [0-9]+ ;         // match integers

NEWLINE:'\r'? '\n' ;     // return newlines to parser (is end-statement signal)
WS  :  [ \t]+ -> skip ; // toss out whitespace
