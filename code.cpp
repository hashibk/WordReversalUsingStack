#include <iostream>
#include <stack>
using namespace std;

int main(){
    string expression="Hello this is data structures";
    stack<string> s;
    string temp="";

    for (int i=0; i<expression.size(); i++){
        if (expression[i] == ' '){
            s.push(temp);
            temp="";
        }
        else{
            temp+=expression[i];
        }
    }
    s.push(temp);

    while (!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

}