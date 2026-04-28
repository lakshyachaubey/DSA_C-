#include<iostream>
#include <stack>
#include <vector>

using namespace std;

string rmvduplicates(string s){
    stack <char> st;
    vector <char> ans;
    for(int i = 0; i<s.length(); i++){
        if(st.size() == 0){
        st.push(s[i]);
        ans.push_back(s[i]);
        }
        else{
            if(s[i] == st.top()) continue;  // agar current character stack ke top ke barabar hai to iska matlab hai ki mujhe consecutive duplicate character mil gaya hai, isliye usse ignore krdo or string me aage badho ,  at last hme stack ke elements ko print krna h to jo stack me push ho rhe h unhe hi ans vector me push kro6
            else{
                st.push(s[i]);
                ans.push_back(s[i]);
            }
        }
    }
    for(int i = 0; i<ans.size(); i++) cout<<ans[i]<<" ";
    cout<<endl;

    // or you can do 
    /*
    while(st.size()>0){
        s += st.top();   // append st.top() to string s
        st.pop();
    }
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    
    */

    

}
int main() {
    string s = "aaabbcddaabffg";
    rmvduplicates(s);
    string s2 = "abccdeefggabbc";
    rmvduplicates(s2);
    return 0;
}