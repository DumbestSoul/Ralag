#include<iostream>
#include "lexer.cpp"

using namespace std;

int main(){
    string inp;
    while(true){
        cout << "Ralag>";
        cin >> inp;
        Lexer lxr(inp);
    }
    return 0;
}