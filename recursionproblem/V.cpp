/*Find all factorial numbers less than or equal to n*/
/*Examples:
Input: n = 3
Output: 1 2
Explanation: The first factorial number is 1 which is less than equal to n. The second number is 2 which is less than equal to n,but the third factorial number is 6 which is greater than n. So we print only 1 and 2.*/

#include<bits/stdc++.h>
using namespace std;
long long factorial(long long n){
    if(n==0){
        return 1;
    }
    else if(n>=1){
        return n*factorial(n-1);
    }
}
vector<long long>sumfact(int n){
    int i=1;
    vector<long long> v;
    int flag=1;
    while(flag){
        long long k = factorial(i);
        if(k<=n){
            v.push_back(k);
        }
        else{
            flag=0;
            break;
        }
        i++;
    }
    return v;
}
int main(){
    int n;
    cin>>n;
    vector<long long>ans=sumfact(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}