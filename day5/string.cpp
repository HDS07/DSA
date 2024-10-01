/*s='rajkumar' find the occurence of each char.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="rajkumar";
    int n=s.size();
    unorderd_map<char,int>mp;
    for(int i=0;i<n;i++){
        char key=s[i];
        mp[key]++;
    }
}