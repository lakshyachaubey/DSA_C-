#include<iostream>
#include<vector>
#include<algorithm> // for swap function
using namespace std;

void reversepart(int i, int j, vector<int> &v){
    while(i<j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

void reverse(vector<int> &v){
    int i = 0;
    int j = v.size() - 1;

    while(i<j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

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

    // using direct built in function.
    // reverse(v1.begin(), v1.end());

    reversepart(0,2,v1);

    display(v1);


    return 0;
}