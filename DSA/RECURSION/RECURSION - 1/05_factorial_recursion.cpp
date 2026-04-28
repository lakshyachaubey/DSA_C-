#include<iostream>
using namespace std;

int fact(int n){
    if(n==1 || n==0) return 1;  // base case
    int ans = n*fact(n-1);   // call and kaam(assigning to a variable)
    return ans;  // return
}

int main() {
    cout<<fact(5);
    return 0;
}


/*
DRY RUN;

fact(5)
    -> 5 * fact(4)
            -> 4* fact(3)
                    -> 3 * fact(2)
                            -> 2 * fact(1)
                                    ->  rerturns 1
                                            -> then fact(2) returns
                                                    -> then fact(3) return 
                                                            -> then fact(4) return 
                                                                    -> then fact(5) return 

*/