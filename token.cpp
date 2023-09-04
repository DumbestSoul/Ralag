#include<iostream>

using namespace std;

class Token{
    private:
        string type;
        int value;
    public:
        Token(string type_){
            type = type_;
            value=INT_MAX;
        }
        Token(string type_, int val){
            type = type_;
            value = val;
        }

        void ref(){
            if(value==INT_MAX){
                cout << "TYPE: " << type << endl;
            }else{
                cout << "TYPE: " << type << ", VAL: " << value << endl;
            }
        }
};