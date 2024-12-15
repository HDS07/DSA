#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(11);
    v.emplace_back(22);
    cout<<v[1]<<endl;

    vector<int>v1(5,100);
    cout<< v1.size()<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    v1.push_back(200);
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    

    /*Vactor increase its capacity automatically as double of its previous capacity when the container is overrfilled*/
    vector<int>v2;
    cout<<v2.capacity()<<endl;
    v2.push_back(1);
    cout<<v2.capacity()<<endl;
    v2.push_back(2);
    cout<<v2.capacity()<<endl;
    v2.push_back(3);
    cout<<v2.capacity()<<endl;
    v2.push_back(4);
    cout<<v2.capacity()<<endl;
    v2.push_back(5);
    cout<<v2.capacity()<<endl;
    
} 