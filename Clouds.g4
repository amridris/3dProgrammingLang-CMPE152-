grammar Clouds;

/** The start rule; begin parsing here. */

prog:   stat+ ;

stat:   expr NEWLINE                                # printExpr
    |   ID '=' expr NEWLINE                         # assign
    |   TYPE ID ('{'init_list'}')* NEWLINE          # declaration
    |   NEWLINE                                     # blank
    ;

expr:   expr op=('*'|'/') expr      # MulDiv
    |   expr op=('+'|'-') expr      # AddSub
    |   INT                         # int
    |   ID                          # id
    |   '(' expr ')'                # parens
    ;


init_list: (init_var ',')* init_var;

init_var: INIT_TYPE '=' expr;




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
    ;
MUL :   '*' ; // assigns token name to '*' used above in grammar
DIV :   '/' ;
ADD :   '+' ;
SUB :   '-' ;
ID  :   [a-zA-Z]+ ;      // match identifiers
INT :   [0-9]+ ;         // match integers
NEWLINE:'\r'? '\n' ;     // return newlines to parser (is end-statement signal)
WS  :  [ \t]+ -> skip ; // toss out whitespace