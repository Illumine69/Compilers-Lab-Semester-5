/*
Name: Sanskar Mittal              Roll No:   21CS10057
Name: Voddula Karthik Reddy       Roll No:   21CS30058
Semester: 5th
Assignment 3: Lexer for tinyC
*/

%{
/* define the token codes */
#define KEYWORD 1
#define IDENTIFIER 2
#define CONSTANT 3
#define STRING_LITERAL 4
#define PUNCTUATOR 5
#define COMMENTS 6
%}

/*** regular definitions ***/

/** keywords **/
KEYWORD        "auto"| "break"| "case"| "char"| "const"| "continue"| "default"| "do"| "double"| "else"| "enum"| "extern"| "float"| "for"| "goto"| "if"| "inline"| "int"| "long"| "register"| "restrict"| "return"| "short"| "signed"| "sizeof"| "static"| "struct"| "switch"| "typedef"| "union"| "unsigned"| "void"| "volatile"| "while"|"_Bool"|"_Complex"|"_Imaginary"

/** idetifiers **/
DIGIT          [0-9]
NONDIGIT       [a-zA-Z_]
IDENTIFIER     {NONDIGIT}({NONDIGIT}|{DIGIT})*

/** constants **/

/* integer constants */
NONZERO_DIGIT  [1-9]
INTEGER_CONSTANT    {NONZERO_DIGIT}{DIGIT}*

/* floating constants */
SIGN                [+-]
DIGIT_SEQUENCE      {DIGIT}+
EXPONENT_PART       ("e"{SIGN}?{DIGIT_SEQUENCE})|(E{SIGN}?{DIGIT_SEQUENCE})
FRACTIONAL_CONSTANT ({DIGIT_SEQUENCE}?"."{DIGIT_SEQUENCE})|({DIGIT_SEQUENCE}".")
FLOATING_CONSTANT   ({FRACTIONAL_CONSTANT}{EXPONENT_PART}?)|({DIGIT_SEQUENCE}{EXPONENT_PART})

/* enumeration constants */
ENUMERATION_CONSTANT {IDENTIFIER}

/* character constants */
ESCAPE_SEQUENCE     [\'\"\?\\\a\b\f\n\r\t\v]
C_CHAR              [^\'\\\n]|({ESCAPE_SEQUENCE})
C_CHAR_SEQUENCE      {C_CHAR}+
CHARACTER_CONSTANT   "\'"{C_CHAR_SEQUENCE}"\'"

CONSTANT            {INTEGER_CONSTANT}|{FLOATING_CONSTANT}|{ENUMERATION_CONSTANT}|{CHARACTER_CONSTANT}

/** string literals **/
S_CHAR              [\"\\\n]|ESCAPE_SEQUENCE
S_CHAR_SEQUENCE     {S_CHAR}+
STRING_LITERAL      "\""{S_CHAR_SEQUENCE}?"\""

/** punctuators **/
PUNCTUATOR          [{}()\[\].->++--&*+-~!/%<<>><><=>=!=^|&&||?:;...=*=/=%=+=-=<<=>>=&=^=|=,#_]

/** comments **/

%%

KEYWORD               { return KEYWORD; }
IDENTIFIER            { return IDENTIFIER; }
CONSTANT              { return CONSTANT; }
STRING_LITERAL        { return STRING_LITERAL; }
PUNCTUATOR            { return PUNCTUATOR; }

%%

int yywrap(void){
    return 1;
}
