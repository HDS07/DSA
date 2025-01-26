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

void InsertionAtBegining(node* & head,int d){
    node* newnode= new node(d);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

int main(){
    node* node1= new node(10);
    node* head=node1;
    print(head);
    InsertionAtBegining(head,20);
    print(head);
}