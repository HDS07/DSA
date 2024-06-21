#include<bits/stdc++.h>
using namespace std;
void pairs(){
    //first way of defining pairs

    pair<int ,int> p1 ={1,3};
    cout<<p1.first<<endl<<p1.second<<endl;

    //secod way

    pair<int,pair<int,int>> p2 = {1,{2,3}};
    cout<<p2.first<<endl<<p2.second.first<<endl<<p2.second.second<<endl;

    //third way
    pair<int,int> arr[]={{11,12},{13,14},{15,16}};
    cout<<arr[1].second;
}
int main(){
    pairs();
}