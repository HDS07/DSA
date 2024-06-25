#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ={11,12,13,14,15};
    vector<int>::iterator n=v.begin();

    int sz=v.size();
    cout<<sz<<endl;

    cout<<*(n)<<endl;

    n=n+2;
    cout<<*(n)<<endl;

    cout<<v[3]<<endl;

    cout<<v.back()<<" ";
    cout<<endl; 


    for(auto n=v.begin();n!=v.end();n++){
        cout<<*n<<" ";
    }
    cout<<endl;

    for(auto n: v){
        cout<<n<<" ";
    }
    cout<<endl;


    v.erase(v.begin()+2);
    for(auto n: v){
        cout<<n<<" ";
    }
    cout<<endl; 

    //inserting function
    v.insert(v.begin()+2,20);
    for(auto n: v){
        cout<<n<<" ";
    }
    cout<<endl; 
}