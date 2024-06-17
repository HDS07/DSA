#include<bits/stdc++.h>
using namespace std;


void min(int x,int y){
    int z;
    if(x<y){
        z=x;
    }
    else if(x=y){
        z=x;
        cout<<"both are equal"<<endl;   
    }
    else{
        z=y;
    }
    cout<<"Minimum value is: "<< z <<endl;
}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    min(n1,n2);
}