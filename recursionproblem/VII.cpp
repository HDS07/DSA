#include<bits/stdc++.h>
using namespace std;
int getlen(char name[]){
    int len=0;
    for(int i=0;name[i]!='\0';i++){
        len++;
    }
    return len;
}
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
    cout<<name;
}


int main(){
    char name[30];
    cin>>name;
    cout<<endl;
    cout<<name<<endl<<endl;
    int len=getlen(name);
    reverse(name,len);
}