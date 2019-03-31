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

vector<Token> tok;

int main(){
    while(cin){
        Token t = get_token();
        tok.push_back(t);
    }
    for(Token t: tok)
        cout<<t.kind<<' '<<t.value;
    //for(int i = 0; i < tok.size(); ++i){
    //    if(tok[i].kind == '*'){
    //        double d = tok[i-1].value * tok[i+1].value
    //    }
    //}
}

// error() simply disguises throws:
inline void error(const string& s)
{
	throw runtime_error(s);
}
