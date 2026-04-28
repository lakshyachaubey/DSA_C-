// fib(n) = fib(n-1) + fib(n-2)
// T(n) = T(n-1) + T(n-2)

// 1 1 2 3 5 8 13 21 34 55 89

#include<iostream>
using namespace std;

int fib(int n){
    if(n==1 || n==2) return 1;
    return fib(n-1) + fib(n-2);
}
int main() {
    cout<<fib(8);
    return 0;
}

// TREE DIAGRAM (Example for n=5)
/*
                        fib(5)
                      /        \
                fib(4)          fib(3)
               /      \        /      \
          fib(3)      fib(2) fib(2)   fib(1)
          /    \
     fib(2)   fib(1)

    - fib(2) and fib(1) are base cases (return 1).
    - The tree grows exponentially.
    - For fib(8), the tree follows this same pattern but is much deeper.
*/