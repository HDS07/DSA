//brute force method of printing an subarray
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5]={5,4,-1,7,8};
    
    for(int i=0;i<5;i++){
        vector<int>temp;
        for(int j=i;j<5;j++){
            temp.push_back(arr[j]);
          for(int i=0;i<temp.size();i++){
                 cout<<temp[i]<<" ";
          }
          cout<<endl;
        }
    }
    

    return 0;
}