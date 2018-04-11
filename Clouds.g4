grammar Clouds;

program : header block '.' ;
header  : CLOUDS IDENTIFIER ';' ;
block   : declarations compound_stmt ;

prog:   stat+ ;

stat:   expr NEWLINE                                # printExpr
    |   ID '=' expr NEWLINE                         # assign
    |   TYPE ID ('{' init_list '}')* NEWLINE        # declaration
    |   NEWLINE                                     # blank
    ;

expr:   expr op=('*'|'/') expr      # MulDiv
    |   expr op=('+'|'-') expr      # AddSub
    |   INT                         # int
    |   ID                          # id
    |   '(' expr ')'                # parens
    ;


expr : expr mul_div_op expr     # mulDivExpr
     | expr add_sub_op expr     # addSubExpr
     | expr rel_op expr         # relExpr
     | number                   # numberConst
     | IDENTIFIER               # identifier
     | '(' expr ')'             # parens
     ;
     
number : sign? INTEGER ;
sign   : '+' | '-' ;
     
mul_div_op : MUL_OP | DIV_OP ; //multiple or divide
add_sub_op : ADD_OP | SUB_OP ; //add or subtract 
rel_op     : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ; //relational operators
rot_op     : ROLL_OP | PITCH_OP | YAW_OP ; //rotational operators

CLOUDS : 'Clouds' ;
BEGIN   : 'BEGIN' ;
END     : 'END' ;
VAR     : 'VAR' ;
REPEAT  : 'REPEAT' ;
UNTIL   : 'UNTIL' ;
IF      : 'IF' ;
THEN    : 'THEN' ;
ELSE    : 'ELSE';



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
    
MUL :   '*' ; // assigns token name to '*' used above in grammar
DIV :   '/' ;
ADD :   '+' ;
SUB :   '-' ;
ID  :   [a-zA-Z]+ ;      // match identifiers
INT :   [0-9]+ ;         // match integers
NEWLINE:'\r'? '\n' ;     // return newlines to parser (is end-statement signal)
WS  :  [ \t]+ -> skip ; // toss out whitespace


