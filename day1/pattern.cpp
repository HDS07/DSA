#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
        for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        for(int j=0;j<2*i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int k=1;k<=n;k++){
        for(int j=1;j<=k;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2*n-2*k;j++){
            cout<<"  ";
        }
        for(int j=1;j<=k;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
        for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int k=1;k<=(2*i+1);k++){
            cout<<ch<<" ";
            if(k<=breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern3(int n){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
}
void pattern4(int n){
        for(int i=0;i<2*n-1;i++){
            for(int j=0;j<2*n-1;j++){
                int top=i;
                int left=j;
                int right=(2*n-2)-j;
                int down=(2*n-2)-i;
                cout<<(n-min(min(top,down),min(left,right)));
            }
        cout<<endl;
        }
}
void pattern5(int n){
        for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=0;j<2*n-2*i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int k=1;k<n;k++){
        for(int l=k;l<n;l++){
            cout<<"* ";
        }
        for(int l=0;l<2*k;l++){
            cout<<"  ";
        }
        for(int l=k;l<n;l++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern5(n);
}