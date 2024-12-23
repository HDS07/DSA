#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;
    int n[size];
    for(int i=0;i<size;i++){
        cin>>n[i];
    }
    int sum=0;
    for(int i=0;i<size;i++){  
        sum=sum+n[i];
    }
    cout<<"The sum of the array is : "<<sum;
}