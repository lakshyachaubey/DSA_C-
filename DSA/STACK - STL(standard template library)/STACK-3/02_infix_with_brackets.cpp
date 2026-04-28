#include<iostream>
#include<stack>

int priority(char c){
if(c == '+' || c == '-') return 1;
else if(c == '*' || c == '/') return 2;
}

int solve(int a, int b, char op){
    if(op == '+') return a+b;
    else if(op == '-') return a-b;
    else if(op == '*') return a*b;
    else return a/b;
}
using namespace std;
int main() {
    string s = "2+6*4/8-3";  // infix expression 
    // we need two stacks, 1 for vals, 1 for ops

    stack <char> ops;
    stack <int> vals;

    for(int i = 0; i<s.length(); i++){
        // check if s[i] is a digit (0-9)
        int ascii = int(s[i]);
        if(ascii>=48 && ascii<=57){  // s[i] = is a digit
            vals.push(s[i]-48);
        }else{ // s[i] not a digit means operator
            if(ops.size()==0) ops.push(s[i]);
            else if(s[i] =='(' || priority(s[i]) > priority(ops.top())) ops.push(s[i]);
            else if(ops.top()=='(') ops.push(s[i]);
            else if(ops.top()==')'){
                
            }
            else{ // priority(s[i]) <= priority(ops.top())
                // i have to do val1 op val2 
                while(ops.size()>0 && priority(s[i]) <= priority(ops.top())){
                    int val2 = vals.top();
                    vals.pop();
                    int val1 = vals.top();
                    vals.pop();
                    char op = ops.top();
                    ops.pop();

                    int ans = solve(val1, val2, op);
                    vals.push(ans);
                }
                ops.push(s[i]);
            }
        }
    }
    // the operator stack can have elements
    // make it empty
    while(ops.size()>0){
        int val2 = vals.top();
        vals.pop();
        int val1 = vals.top();
        vals.pop();
        char op = ops.top();
        ops.pop();

        int ans = solve(val1, val2, op);
        vals.push(ans);
    }
    cout<<vals.top()<<endl;


    return 0;
}