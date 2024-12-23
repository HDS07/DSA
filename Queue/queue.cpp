#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>a;
   
    a.push(5);
    a.push(3);
    a.push(8);
    a.push(1);
    a.push(4);
    a.push(2);
    
    int n=a.size();
    cout<<a.front()<<endl;

    a.pop();

    cout<<a.front()<<endl;
    cout<<a.back()<<endl;

    

    
}