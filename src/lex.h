#ifndef NEXTLUA_LEX_H
#define NEXTLUA_LEX_H

#include <iostream>

//token枚举
enum token_type {
    IDENT = 1, // identifier

    // 关键字
    AND,
    BREAK,
    DO,
    ELSE,
    ELSEIF,
    END,
    FALSE,
    FOR,
    FUNCTION,
    GOTO,
    IF,
    IN,
    LOCAL,
    NIL,
    NOT,
    OR,
    REPEAT,
    RETURN,
    THEN,
    TRUE,
    UNTIL,
    WHILE,

    // 操作符
    PLUS,
    MINUS,
};

//token信息
struct token_info {
    token_type type;
    std::string value;
};

class lex {
public:
    token_info parse();
};

#endif
