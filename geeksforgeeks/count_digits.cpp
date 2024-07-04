/*Given a number n. Count the number of digits in n which evenly divide n. Return an integer, total number of digits of n which divides n evenly.
Note :- Evenly divides means whether n is divisible by a digit i.e. leaves a remainder 0 when divided.*/
/*Author:Harshdeep
code:01*/

#include<bits/stdc++.h> 
using namespace std;
int evenlyDivides(int N){
        int ori= N;
        int count=0;  
        while(N>0){
            int lastdig=N%10;
            if(lastdig!=0 && ori%lastdig==0){
                count++;
            }
            N=N/10;
        }
        return count;
    }
int main(){ 
    int N;
    cin>>N;
    cout<<"The output is: "<<evenlyDivides(N);
    return 0;
}
