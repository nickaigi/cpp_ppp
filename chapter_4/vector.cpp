#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;


int main(){
    string name;
    vector<int> v1 {8,2,3,9,1};
    vector<string> names;

    cout<<"Our vector contains:\n";
    for(int i: v1)
        cout<<i<<endl;

    sort(v1.begin(), v1.end()); // sort in ascending order

    cout<<"After sorting the vector\n";
    for(int i: v1)
        cout<<i<<endl;

    cout<<"Adding dynamic values to a vector:\n";
    for(int i = 0; i < 10; ++i)
        names.push_back("person-" + to_string(i));

    for(string person: names)
        cout<<person<<endl;

    cout<<"Please provide other names to add to the vector:\n";
    for(string name;cin>>name;) // notice that the for loop doen't include the step
        names.push_back(name);

    sort(names.begin(), names.end());

    cout<<"After sorting the names:\n";

    cout<<"Names entered: "<<names.size()<<endl;
    for(string name:names)
        cout<<name<<endl;
}
