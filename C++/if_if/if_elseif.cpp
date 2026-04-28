#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n>5){
        cout<<"n>5"<<endl;
    }
    else if(n<5){
        cout<<"n<5"<<endl;
    }
    else if(n%2==0){
        cout<<"n%2==0"<<endl;
    }

    int x;
    cin>>x;
    if(x<0){
        cout<<"x<10"<<endl;
    }
    if(x>10){
        cout<<"x>10"<<endl;
    }
    if(x>10 && x<15){
        cout<<"x>10 && x<15"<<endl;
    }
    if(x%2==0){
        cout<<"x%2==0";
    }
    return 0;
}


// if else if -> ladder me agar if condition chali to thik nhi to else if chalegi or jo bhi sabse first condition true hui wo print hojaegi baaki sabhi skip hojayengi



// Feature	                       if-if ladder	                           if-else if ladder
// Conditions checking	       All conditions check	                      Stop after first true
// Outputs	                    Multiple ho sakte	                              Sirf ek
// Speed	                    Slow (zyada checks)	                                Fast
// Use	Jab multiple results chahiye	        Jab ek hi result chahiye (grading, menu, range)