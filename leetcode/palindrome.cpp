#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
        int temp=0;
        int lastdig;
        int num=x;
        bool ans=false;
        while(num>0){
            lastdig=num%10;
            temp=temp*10+lastdig;
            num=num/10;
        }
        if(x==temp){
            return true;
        }
        else{
            return ans;
        }
}
int main(){
    int x;
    cin>>x;
    cout<<"1 is for palindrome or 0 is for not a palindrome :  "<<isPalindrome(x);
}