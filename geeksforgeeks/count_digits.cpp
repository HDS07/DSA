#include<bits/stdc++.h> 
using namespace std;
class Solution{
public:
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
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
};
