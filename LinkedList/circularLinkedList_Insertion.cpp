#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        data = d;
        next = NULL;
    }
};

print(node* &tail){
    node*head=tail;
   do{
    cout<<tail->data<<" ";
    tail=tail->next;
   }while(tail!=head);
    cout<<endl;
}


void insertionNode(node* &  tail,int element,int d){
    if(tail==NULL){
        node*temp=new node(d);
        tail=temp;
        temp->next=temp;
    }
    else{
        node* current=tail;
        while(current->data!=element){
            current=current->next;
        }
        node* temp=new node(d);
        temp->next=current->next;
        current->next=temp;
        
    }
}
int main(){
    node* tail=NULL;
    insertionNode(tail,2,3);
    print(tail);
    insertionNode(tail,3,4);
    insertionNode(tail,4,5);
    print(tail);
}
