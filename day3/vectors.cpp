#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(11);
    v.emplace_back(22);
    cout<<v[1]<<endl;

    vector<int>v1(5,100);
    cout<<v1[1]<<endl;
    v1.push_back(200);
    cout<<v1[5];
} 