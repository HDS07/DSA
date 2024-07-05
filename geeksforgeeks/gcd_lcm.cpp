/*Given two integers a and b, write a function lcmAndGcd() to compute their LCM and GCD. The function takes two integers a and b as input and returns a list containing their LCM and GCD.*/
/*Author:Harshdeep
code:02*/

#include<bits/stdc++.h> 
using namespace std;
vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long>v(2);
        int dvd=A;
        int divr=B;
        while(dvd%divr!=0){
            int rem=dvd%divr;
            dvd=divr;
            divr=rem;
        }
        v[1]=divr;
        v[0]=(A*B)/v[1];
        return v;
    }
int main(){
    int num1;
    int num2;
    cin>>num1>>num2;
    vector<long long>v=lcmAndGcd(num1,num2);
    cout<<v[0]<<" "<<v[1];
    return 0;
}