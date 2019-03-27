#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> v1 {1,2,3,4,5};
    vector<string> names;

    for(int i: v1)
        cout<<i<<endl;

    cout<<"please enter your names: ";
    for(string name; cin>>name;)
        names.push_back(name);

    cout<<"Names entered: "<<names.size()<<endl;
    for(string name:names)
        cout<<name<<endl;
}
