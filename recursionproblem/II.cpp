/*Print 1-->N numbers using backtracking */

#include<bits/stdc++.h>
using namespace std;

int printNumbers(int i,int n){
    if(i<1){
        return 0;
    }
    else{
        printNumbers(i-1,n);
        cout<<i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    printNumbers(n,n);
}