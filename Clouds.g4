grammar Clouds;

/** The start rule; begin parsing here. */

prog:   stat+ ;

stat:   expr NEWLINE                # printExpr
    |   ID '=' expr NEWLINE         # assign
    |   (TYPE ' ')* ID INIT_LIST* NEWLINE         # declaration
    |   NEWLINE                     # blank
    ;

expr:   expr op=('*'|'/') expr      # MulDiv
    |   expr op=('+'|'-') expr      # AddSub
    |   INT                         # int
    |   ID                          # id
    |   '(' expr ')'                # parens
    ;


INIT_LIST: '{' (INT ',')* INT '}'
   // |       '{' (INIT_TYPE )
    ;
TYPE:   'circle'
    |   'triangle'
    |   'square'
    ;
INIT_TYPE:  'height'
    |       'width'
    ;
MUL :   '*' ; // assigns token name to '*' used above in grammar
DIV :   '/' ;
ADD :   '+' ;
SUB :   '-' ;
ID  :   [a-zA-Z]+ ;      // match identifiers
INT :   [0-9]+ ;         // match integers
NEWLINE:'\r'? '\n' ;     // return newlines to parser (is end-statement signal)
WS  :  [ \t]+ -> skip ; // toss out whitespace