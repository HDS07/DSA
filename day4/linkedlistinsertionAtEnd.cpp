#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* add;
    node(int value){
        data=value;
        add=NULL;
    }

};

void InsertionAtEnd(node* &tail,int value){
    node* temp= new node(value);
    tail->add=temp;
    tail=temp;
 }

void printf(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->add;
    }
 }
int main(){
    node *head= new node(10);
    node *tail=head;
    InsertionAtEnd(tail,20);
    InsertionAtEnd(tail,30);
    printf(head);
    cout<<endl;
    InsertionAtEnd(tail,40);
    printf(head);

}