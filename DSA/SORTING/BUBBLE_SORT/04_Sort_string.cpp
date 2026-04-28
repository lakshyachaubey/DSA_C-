// SORTING -> means to put elements in ascending/increasing or descending/non-increasing order. 

#include<iostream>
#include <string>
#include<algorithm>

using namespace std;
int main() {
    string s = "ABCDIGJZXBYDXZYX";
    string str = "";
    
    for(int i=0; i<s.length(); i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }

    cout<<str<<endl;

    // sort(str.begin(), str.end()); // sorts in ascending order by default

    for(int i=0; i<str.length(); i++){
        for(int j=0; j<str.length()-1-i; j++){
            if(str[j]>str[j+1]){
                swap(str[j], str[j+1]);
            }
        }
    }

    for(int i = 0; i<str.length(); i++){
        cout<<str[i]<<" ";
    }
    
    return 0;
}