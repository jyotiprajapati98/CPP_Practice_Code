#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void merge(vector<int>& num1, int n, vector<int>& num2, int m){
    vector<int> combine;
    for(int i = 0; i< n; i++){
        combine.push_back(num1[i]);
    }
    
    for(int j = 0; j<m; j++){
        combine.push_back(num2[j]);
    }
    
    sort(combine.begin(), combine.end());
    
    for(int i=0; i<n; i++){
        num1[i] = combine[i];
    }
    
    for(int j = 0; j <m; j++){
        num2[j] = combine[n + j];
    }
}
 
int main(){
    vector<int> vec1 = {1, 3, 4, 5};
    vector<int> vec2 = {2, 4, 6, 8};
    int n = vec1.size();
    int m = vec2.size();
    merge(vec1, n, vec2, m);
    cout<<"Array 1: ";
    for(int i: vec1){
        cout<< i << " ";
    }
    
    cout<<"\n"<<"Array 2: ";
    
    for(int i: vec2){
        cout<< i << " ";
    }
}
