#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>maxi;
    priority_queue<int, vector<int>, greater<int>>mini;
    maxi.push(5);
    maxi.push(3);
    maxi.push(8);
    maxi.push(1);
    maxi.push(4);
    maxi.push(2);
    
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<endl;
        maxi.pop();
    }
    
}