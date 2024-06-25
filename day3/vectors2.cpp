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

}