#include<iostream>
#include<vector>
using namespace std;

class Token{
    public:
        char kind;
        double value;
};

Token get_token();

inline void error(const string&);
double expression();
double term();
double primary();

vector<Token> tok;

int main(){
    try{
        while(cin)
            cout<<expression()<<'\n';
    }
    catch(exception& e){
        cerr<<e.what()<<'\n';
        return 1;
    }
    catch(...){
        cerr<<"exception \n";
        return 2;
    }
}

// error() simply disguises throws:
inline void error(const string& s)
{
	throw runtime_error(s);
}

double expression(){
    double left = term();
    Token t = get_token();
    while(true){
        switch(t.kind){
            case '+':
                left += term();
                t = get_token();
                break;
            case '-':
                left -= term();
                t = get_token();
                break;
            default:
                return left;
        }
    }
}

double term(){
    double left = primary();
    Token t =  get_token();
    while(true){
        switch(t.kind){
            case '*':
                left *= primary();
                t = get_token();
                break;
            case '/':
            {   // if you want to define and initialize variables within a switch
                // you must place them inside a block
                double d = primary();
                if(d == 0) error("divide by zero");
                left /= d;
                t = get_token();
                break;
            }
            default:
                return left;
        }
    }
}

double primary(){
    Token t = get_token();
    switch(t.kind){
        case '(':
            {
                double d = expression();
                t = get_token();
                if(t.kind != ')')
                    error("')' expected");
                return d;
            }
        case '8': //we use 8 to represent a number
            return t.value;
        default:
            error("primary expected");
    }
}
