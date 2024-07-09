/*Given an integer n, calculate the sum of series 1^3 + 2^3 + 3^3 + 4^3 + … till n-th term.*/

#include<bits/stdc++.h>
using namespace std;
long long sumOfSeries(long long n) {
    long long i;
    if(n<1){
        return 0;
    }
    else{
        i=n*n*n + sumOfSeries(n-1);
    }
    return i;
}

int main(){
    long long n;
    cin>>n;
    cout<<"The sum is : ";
    cout<<sumOfSeries(n);

}