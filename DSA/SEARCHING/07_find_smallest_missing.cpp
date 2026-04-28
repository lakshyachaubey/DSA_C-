// using linear search

#include<iostream>
using namespace std;
int main() {
    int arr[8] = {0, 1, 2, 3, 4, 8, 9, 12};
    int n = 8;
    // find smallest missing element;  // in this question array starts from 0 so using linear search if any index doesnt have its element as the index number then the number is missing break;

    for(int i = 0; i<n; i++){
        if(i!=arr[i]){
            cout<<i;
            break;
        }
    }
    return 0;
}