#include<iostream>
#include<vector>
#include<algorithm> // for swap function
using namespace std;

void display(vector<int> v){
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main() {
    vector<int> v1;
    v1.push_back(7);
    v1.push_back(4);     
    v1.push_back(6);     
    v1.push_back(2); 
    v1.push_back(9);
    v1.push_back(5);
    v1.push_back(8);

    display(v1);
    cout<<endl;

    // direct -> built in function for reverse;
    // reverse(v1.begin(), v1.end());

    int i = 0;
    int j = v1.size() - 1;

    while(i<=j){
        // swap(v1[i], v1[j]);  direct function for swap;
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
        i++;
        j--;
    }

    display(v1);

    cout<<endl;

    // using for loop;

    for(int i = 0, j = v1.size() - 1; i<=j; i++, j--){
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
    }

    display(v1);


    return 0;
}