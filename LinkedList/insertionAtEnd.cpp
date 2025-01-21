#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        data=d;
        next=NULL;
    }
};

void PrintLinkedList(node* & head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void InsertionAtEnd(node* & tail , int d){
    node* temp= new node(d);
    tail->next=temp;
    tail=temp;

}


int main(){
    node* head = new node(10);
    node* tail = head;
    InsertionAtEnd(tail,20);
    InsertionAtEnd(tail,30);

    PrintLinkedList(head);
    
}