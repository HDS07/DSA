#include <bits/stdc++.h> 
using namespace std;

bool valid(char ch){
    if(ch>='a'&&ch<='z'||ch>='0'&&ch<='9'||ch>='A'&&ch<='Z'){
        return 1;
    }
    return 0;
}
char lower(char ch){
    if(ch>='a'&&ch<='z'||ch>='0'&&ch<='9'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
    
}
bool checkPalindrome(string s)
{
    string temp="";
    for(int i=0;i<s.size();i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    int st=0;
    int end=temp.size()-1;
    while(st<=end){
        if(lower(temp[st])!=lower(temp[end])){
            return 0;
        }
        else{
            st++;
            end--;
        }
    }
    return 1;
}
int main(){
    string s;
    cin>>s;
    cout<<"0 is for invalid palindrome and 1 is for valid palindrome : "<<checkPalindrome(s);

}