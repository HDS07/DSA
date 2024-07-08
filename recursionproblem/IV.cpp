/*Find all factorial numbers less than or equal to n*/
/*Examples:
Input: n = 3
Output: 1 2
Explanation: The first factorial number is 1 which is less than equal to n. The second number is 2 which is less than equal to n,but the third factorial number is 6 which is greater than n. So we print only 1 and 2.*/

#include<bits/stdc++.h>
using namespace std;

vector<long long>sumfact(int n){
    vector<long long>ans;
    int i=2;
    int sum=1;
    while(sum<=n){
        ans.push_back(sum);
        sum=sum*i;
        i++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<long long>ans=sumfact(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}