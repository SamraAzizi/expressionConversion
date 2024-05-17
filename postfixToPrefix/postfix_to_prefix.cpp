#include<iostream>
#include<stack>



using namespace std;

bool isOperand(char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        return true;

    }else{
        return false;
    }
}

string postfixToPrefix(string postfix){
    stack<string> s;
    for(int i=0;i<postfix.length(); i++){
        if(isOperand(postfix[i])){
        string op(1, postfix[i]);
        s.push(op);
        }else{
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            s.push(postfix[i] + op2 + op1);

    }
}
return s.top();
}

int main(){
    string prefix, postfix;

    cout<<"Enter a POSTFIX expression: "<<endl;
    cin>>postfix;
    cout<<"POSTFIX EXPRESSION: "<<postfix<<endl;
    prefix = postfixToPrefix(postfix);
    cout<<endl<<"PREFIX EXPRESSION: "<<prefix;

    return 0;
}