#include<iostream>
using namespace std;

int printsum2(int n){
    if(n==0) return 0;
    return n + printsum2(n-1);
}

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<printsum2(n);
    return 0;
}


// DRY RUN

/*
sum(6) = 6 + sum(5)
            sum(5) = 5 + sum(4)
                        sum(4) = 4 + sum (3)
                                    sum(3) = 3 + sum(2)
                                                sum(2) = 2 + sum(1)
                                                            sum(1) = 1 + sum(0)
                                                                        sum(0) = return 0;
*/