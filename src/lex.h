#ifndef NEXTLUA_LEX_H
#define NEXTLUA_LEX_H

#include <iostream>

//token枚举
enum token_type {
    IDENT = 1,
    BRACE = 2,
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
