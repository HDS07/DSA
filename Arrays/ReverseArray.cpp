#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int s=0,end=n-1;
    while(s<=end){
        swap(arr[s],arr[end]);
        s++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
}