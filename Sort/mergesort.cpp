#include <bits/stdc++.h>
using namespace std;
void merge(int* arr,int s ,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    int initialArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[initialArrayIndex++];
    }

    initialArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[initialArrayIndex++];
    }

    int index1=0;
    int index2=0;
    initialArrayIndex=s;
    while(index1<len1&&index2<len2){
        if(first[index1]<second[index2]){
            arr[initialArrayIndex++]=first[index1++];
        }
        else{
            arr[initialArrayIndex++]=second[index2++];
        }
    }

    while(index1<len1){
        arr[initialArrayIndex++]=first[index1++];
    }
    
    while(index2<len2){
        arr[initialArrayIndex++]=second[index2++];
    }

    delete [] first;
    delete [] second;
}


void mergesort( int* arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
    int arr[7]={81,32,15,7,93,12,45};
    int n=7;
    mergesort(arr,0,n-1);
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

