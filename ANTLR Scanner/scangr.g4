// antlr4 -Dlanguage=Cpp -o generate scangr.g4
// java -jar C:\antlr4\lib\antlr-4.12.0-complete.jar -Dlanguage=Cpp -visitor -no-listener -o generate scangr.g4
grammar scangr;

program : statement+ ;

statement : keyword | identifier | number | symbol | NEWLINE ;

keyword : AND | ARRAY | ASM | BEGIN | BREAK | CASE | CONST | CONSTRUCTOR | CONTINUE | DESTRUCTOR | DIV | DO | DOWNTO | ELSE | END | FALSE | FILE | FOR | FUNCTION | GOTO | IF | IMPLEMENTATION | IN | INLINE | INTERFACE | LABEL | MOD | NIL | NOT | OBJECT | OF | ON | OPERATOR | OR | PACKED | PROCEDURE | PROGRAM | RECORD | REPEAT | SET | SHL | SHR | STRING | THEN | TO | TRUE | TYPE | UNIT | UNTIL | USES | VAR | WHILE | WITH | XOR ;

identifier : IDENTIFIER ;

number : INTEGER | REAL ;

symbol : ASSIGN | EQUAL | NE | LTEQ | GTEQ | LT | GT | PLUSEQUAL | MINUSEQUAL | MULTEQUAL | DIVEQUAL | CARAT | SEMICOLON | COMMA | LPAREN | RPAREN | LBRACKET | RBRACKET | LBRACE | RBRACE | LCOMMENT | RCOMMENT ;

AND : [Aa][Nn][Dd] ;
ARRAY : [Aa][Rr][Rr][Aa][Yy] ;
ASM : [Aa][Ss][Mm] ;
BEGIN : [Bb][Ee][Gg][Ii][Nn] ;
BREAK : [Bb][Rr][Ee][Aa][Kk] ;
CASE : [Cc][Aa][Ss][Ee] ;
CONST : [Cc][Oo][Nn][Ss][Tt] ;
CONSTRUCTOR : [Cc][Oo][Nn][Ss][Tt][Rr][Uu][Cc][Tt][Oo][Rr] ;
CONTINUE : [Cc][Oo][Nn][Tt][Ii][Nn][Uu][Ee] ;
DESTRUCTOR : [Dd][Ee][Ss][Tt][Rr][Uu][Cc][Tt][Oo][Rr] ;
DIV : [Dd][Ii][Vv] ;
DO : [Dd][Oo] ;
DOWNTO : [Dd][Oo][Ww][Nn][Tt][Oo] ;
ELSE : [Ee][Ll][Ss][Ee] ;
END : [Ee][Nn][Dd] ;
FALSE : [Ff][Aa][Ll][Ss][Ee] ;
FILE : [Ff][Ii][Ll][Ee] ;
FOR : [Ff][Oo][Rr] ;
FUNCTION : [Ff][Uu][Nn][Cc][Tt][Ii][Oo][Nn] ;
GOTO : [Gg][Oo][Tt][Oo] ;
IF : [Ii][Ff] ;
IMPLEMENTATION : [Ii][Mm][Pp][Ll][Ee][Mm][Ee][Nn][Tt][Aa][Tt][Ii][Oo][Nn] ;
IN : [Ii][Nn] ;
INLINE : [Ii][Nn][Ll][Ii][Nn][Ee] ;
INTERFACE : [Ii][Nn][Tt][Ee][Rr][Ff][Aa][Cc][Ee] ;
LABEL : [Ll][Aa][Bb][Ee][Ll] ;
MOD : [Mm][Oo][Dd] ;
NIL : [Nn][Ii][Ll] ;
NOT : [Nn][Oo][Tt] ;
OBJECT : [Oo][Bb][Jj][Ee][Cc][Tt] ;
OF : [Oo][Ff] ;
ON : [Oo][Nn] ;
OPERATOR : [Oo][Pp][Ee][Rr][Aa][Tt][Oo][Rr] ;
OR : [Oo][Rr] ;
PACKED : [Pp][Aa][Cc][Kk][Ee][Dd] ;
PROCEDURE : [Pp][Rr][Oo][Cc][Ee][Dd][Uu][Rr][Ee] ;
PROGRAM : [Pp][Rr][Oo][Gg][Rr][Aa][Mm] ;
RECORD : [Rr][Ee][Cc][Oo][Rr][Dd] ;
REPEAT : [Rr][Ee][Pp][Ee][Aa][Tt] ;
SET : [Ss][Ee][Tt] ;
SHL : [Ss][Hh][Ll] ;
SHR : [Ss][Hh][Rr] ;
STRING : [Ss][Tt][Rr][Ii][Nn][Gg] ;
THEN : [Tt][Hh][Ee][Nn] ;
TO : [Tt][Oo] ;
TRUE : [Tt][Rr][Uu][Ee] ;
TYPE : [Tt][Yy][Pp][Ee] ;
UNIT : [Uu][Nn][Ii][Tt] ;
UNTIL : [Uu][Nn][Tt][Ii][Ll] ;
USES : [Uu][Ss][Ee][Ss] ;
VAR : [Vv][Aa][Rr] ;
WHILE : [Ww][Hh][Ii][Ll][Ee] ;
WITH : [Ww][Ii][Tt][Hh] ;
XOR : [Xx][Oo][Rr] ;

IDENTIFIER : [a-zA-Z]+ ;
INTEGER : [0-9]+ ;
REAL : [0-9]*'.'[0-9]+ ;
ASSIGN : ':=' ;
EQUAL : '=' ;
NE : '<>' ;
LTEQ : '<=' ;
GTEQ : '>=' ;
LT : '<' ;
GT : '>' ;
PLUSEQUAL : '+=' ;
MINUSEQUAL : '-=' ;
MULTEQUAL : '*=' ;
DIVEQUAL : '/=' ;
CARAT : '^' ;
SEMICOLON : ';' ;
COMMA : ',' ;
LPAREN : '(' ;
RPAREN : ')' ;
LBRACKET : '[' ;
RBRACKET : ']' ;
LBRACE : '{' ;
RBRACE : '}' ;
LCOMMENT : '(*' ;
RCOMMENT : '*)' ;
NEWLINE : '\r'? '\n' ;

WS : [ \t]+ -> skip ;
