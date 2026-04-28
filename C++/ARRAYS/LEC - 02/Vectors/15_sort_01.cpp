#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int> &v){
    int n = v.size();
    int noo = 0; 
    int noz = 0;
    for(int i = 0; i<n; i++){
        if(v[i] == 0) noz++;
        else noo++;
    }

    // filling elements:

    for(int i = 0; i<n; i++){
        if(i<noz) v[i] = 0;
        else v[i] = 1;
    }
}
int main() {
    vector<int> v1;
    v1.push_back(0);
    v1.push_back(1);     
    v1.push_back(0);     
    v1.push_back(1); 
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);

    for(int i = 0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }

    cout<<endl;

    sort01(v1);
    
    for(int i = 0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    
    return 0;
}