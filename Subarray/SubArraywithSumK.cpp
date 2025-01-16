// Brute force Method 

#include <bits/stdc++.h>
using namespace std;
void countSubarrays(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        vector<int>temp;
        int count=0;
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=i;j<n;j++){
                temp.push_back(arr[j]);
                int sum=0;
                for(int v:temp){
                    sum=sum+v;
                }
                if(k==sum){
                    count++;
                }
            }
        }
        cout<<count;
    }
int main() {
    // vector<int>arr={1, 3, 5};
    vector<int>arr={10, 2, -2, -20, 10};
    cout<<"The no. of Subarray whose sum equal to k : ";
    countSubarrays(arr,-10);

    return 0;
}