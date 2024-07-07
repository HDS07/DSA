/*Print N-->1 numbers using backtracking */

#include<bits/stdc++.h>
using namespace std;

int printNumbers(int i,int n){
    if(i>n){
        return 0;
    }
    else{
        printNumbers(i+1,n);
        cout<<i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    printNumbers(1,n);
}