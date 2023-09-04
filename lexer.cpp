#include<iostream>
#include<vector>
#include "token.cpp"
#include "types.h"

using namespace std;

class Lexer{
    private:
        string text;
        int pos = -1;
        vector<Token> tokens;

    public:
        Lexer(string text_){
            text = text_;
        }
};