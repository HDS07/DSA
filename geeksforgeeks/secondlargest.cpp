// Given an array arr, return the second largest distinct element from an array. If the second largest element doesn't exist then return -1.

// Examples:

// Input: arr = [12, 35, 1, 10, 34, 1]
// Output: 34
// Explanation: The largest element of the array is 35 and the second largest element is 34.

#include<bits/stdc++.h>
using namespace std;
 int Seclargest(int arr[],int n){
    int max = arr[0];
    int secmax=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secmax=max;
            max=arr[i];
        }
        else if(arr[i]<max&&arr[i]>secmax){
            secmax=arr[i];
        }
    }
    return secmax;
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
    cout <<"Second largest element : " <<Seclargest(arr,n) << endl;
 }