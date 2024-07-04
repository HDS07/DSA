/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned)*/
/*Author:Harshdeep
code:02*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int rev=0;
        int lastdigit;
         while(x>0||x<0){
            lastdigit=x%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10){
                rev=0;
            }
            else{
            rev=rev*10+lastdigit;
            }
            x=x/10;
         }

        return rev;
    }
};
int main(){
    Solution s;
    int x;
    cin>>x;
    cout<<"The output is:"<<s.reverse(x);
    return 0;
}