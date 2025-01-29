#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }
};

void print(node*head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertionNode(node* & tail,int d){
    if(tail==NULL){
        tail=new node(d);
        return;
    }
    node *temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=tail->next;
}

void insertionAtPosition(node* &head,int pos,int d){
    node* pointer=head;
    if(pos==1){
        node* temp=new node(d);
        temp->next=pointer;
        pointer->prev=temp;
        pointer=temp;
    }
    for(int i=1;i<pos-1;i++){
        pointer=pointer->next;
    }
    node* temp=new node(d);
    temp->next=pointer->next;
    pointer->next->prev=temp;
    pointer->next=temp;
    temp->prev=pointer;



}
int main(){
    node* tail=NULL;
    insertionNode(tail,10);
    node* head = tail;
    insertionNode(tail,20);
    insertionNode(tail,30); 
    print(head);
    int pos=3;
    insertionAtPosition(head,pos,25);
    print(head);
    return 0;
}