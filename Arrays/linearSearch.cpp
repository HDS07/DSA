#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int element,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[]={1,42,4,5,2,6,8,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<< "Enter the element to search : ";
    int element;
    cin>>element;

    bool elementSearch=search(arr,element,n);
    if(elementSearch){
        cout<<"Element found in array"<<endl;
    }
    else{
        cout<<"Element not found in array"<<endl;
    }
}