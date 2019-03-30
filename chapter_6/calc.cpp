#include<iostream>
using namespace std;

inline void error(const string&);

int main(){
    cout<<"Please enter expression(we can hande +,-,*, and /)\n";
    cout<<"add an x to end expression (e.g., 1+2*3x): ";
    int lval = 0;
    int rval;
    cin>>lval;
    if(!cin)
        error("no first operand");
    for(char op; cin>>op;){
        if(op!='x')
            cin>>rval;
        if(!cin)
            error("no secode operand");
        switch(op){
            case '+':
                lval += rval;
                break;
            case '-':
                lval -= rval;
                break;
            case '*':
                lval *= rval;
                break;
            case '/':
                lval /= rval;
                break;
            default:
                cout<<"Result: "<<lval<<'\n';
                return 0;
        }
    }
    error("bad expression");
}

// error() simply disguises throws:
inline void error(const string& s)
{
	throw runtime_error(s);
}
