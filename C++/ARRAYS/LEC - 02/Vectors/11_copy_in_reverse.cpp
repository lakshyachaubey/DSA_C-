#include<iostream>
#include<vector>
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

    display(v1);

    vector<int> v2(v1.size());
    for(int i = 0; i<v1.size(); i++){
        int j = v1.size() - 1 - i;  // pointer to the last element of v1; as i increases, j decreases, thus copying elements in reverse order
        v2[i] = v1[j];
    }
    display(v2);



    return 0;
}