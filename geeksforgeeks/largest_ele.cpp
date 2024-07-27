// Given an array arr, the task is to find the largest element in it.
// Examples:

// Input: arr= [1, 8, 7, 56, 90]
// Output: 90
// Explanation: The largest element of given array is 90.
// Constraints:
// 1 <= arr.size()<= 105
// 0 <= arri <= 105
#include<bits/stdc++.h>
using namespace std;
 int largest(int arr[],int n){
    int max = arr[0];
    for (int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
 }
 int main(){
    cout<<"Enter the size of an arrray."<<endl;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout <<"Largest element : " <<largest(arr,n) << endl;
 }