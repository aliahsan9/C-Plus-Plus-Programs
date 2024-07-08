#include<iostream>
#include<stack>
using namespace std;

int prec(char c){

    if(c=='^'){
        return 0;
    }
    else if(c=='*'||c=='/'){
        return 0;
    }
    else if(c=='+'||c=='-'){
        return 0;
    }
    else {
        return -1;
    }
}
string infixpostfix(string s){

    stack<char> st;
    string res;

    for(int i=0;i<s.length();i++){

        if((s[i]>='a' && s[i]<='z') || (s[i]>='a' && s[i]<='z'))
        res+=s[i];

    }
    else {
        while(!st.empty()&& prec(st.top())>prec(s[i])){
            res+=st.top();
            st.pop();
        }
        if(s[i]=='('){
        st.push(s[i]);

    }
    else if(s[i]==')'){
        while(!st.empty()&& st.top()!='('){
            res+=st.top();
            st.pop();
        
        }
        if(!st.empty()){
            st.pop();
        }
    }
    else{
        while(!st.empty()&& prec(st.top())>prec(s[i])){
            res+=st.top();
            st.pop();
        }
   } 
   {st.push(s[i]);
}
else{
while (
    !st.empty()&&prec(st.top*())>prec(s[i])){
        res+=st.top();
        st.pop();

    }
    return res;}

int main(){
    cout<<infixtopostfix("a-b/c)*(a/k-l")<<endl;

return 0;
}
    }