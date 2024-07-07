/*Given a positive integer N., The task is to find the value of Σi from 1 to N F(i) where function F(i) for the number i is defined as the sum of all divisors of i.*/
/*Author:Harshdeep
code:02*/

#include<bits/stdc++.h> 
using namespace std;

int sumofdivisor(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=(n/i)*i+sum;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sumofdivisor(n);
}