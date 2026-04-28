//  Examples :
/*
string s = "({[]})";
Output : Balanced

string s = "({[})";
Output : Not Balanced

string s = "()(())";
Output : Balanced

Observation : brackets are balanced if for every opening bracket there is a closing bracket and the order of brackets is correct. and total no of brackets must be even.

and agar mujhe kahi bhi closing bracket dikhta h to usse pehle uska opening bracket hona chahiye. and agar mujhe kahi bhi opening bracket dikhta h to uske baad uska closing bracket hona chahiye.
*/


#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string s){
    if(s.length()%2!=0) return false;
    
    stack <char> st;
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='(') st.push(s[i]);
        else{   // s[i] = ')'
            if(st.size()==0) return false;  // agar stack empty hai to iska matlab hai ki mujhe closing bracket mil gaya hai bina opening bracket ke, isliye not balanced
            else st.pop();  // st.top = '(' kyuki stack me sirf opening brackets hi push kra rhe h to closing bracket ke milne pe stack ko pop(mtlb opening bracket ko remove krdo)
        }
    }
    if(st.size()==0) return true;   // after all pops if stack is empty then balanced else not balanced
    else return false;
}

int main() {
    string s = "(()()))";
    if(isBalanced(s)) cout<<"Balanced"<<endl;
    else cout<<"Not Balanced"<<endl;
    return 0;
}