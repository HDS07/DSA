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

void insertionAtEnd(node* &tail,int data){
    node* temp=new node(data);
    tail->next=temp;
    tail=tail->next;
}

void insertionAtPosition(int pos,node* &head,int data){
    node* position=head;
    node*temp=new node(data);
    for(int i=1;i<pos-1;i++){
        position=position->next;
    }
    temp->next=position->next;
    position->next=temp;
}

int main(){
    node* head = new node(1);
    node* tail=head;
    insertionAtEnd(tail,2);
    insertionAtEnd(tail,4);
    insertionAtEnd(tail,5);

    PrintLinkedList(head);
    int pos=3;
    cout<<"Node added to the position : "<<pos;
    cout<< endl; 
    insertionAtPosition(pos,head,3);
    PrintLinkedList(head);
    

}