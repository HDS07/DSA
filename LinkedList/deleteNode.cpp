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

void deleteNode(node * &head,int p){
    if(p==1){
        node* temp=head;
        head=head->next;
        delete temp;
    }
    else{
        int i=1;
        node* current=head;
        node* prev;
        while(i<p){
            prev=current;
            current=current->next;
            i++;
        }
        prev->next=current->next;
        delete current;
    }
}


int main(){
    node* head = new node(1);
    node* tail=head;
    insertionAtEnd(tail,2);
    insertionAtEnd(tail,3);
    insertionAtEnd(tail,4);
    insertionAtEnd(tail,5);

    PrintLinkedList(head);
    
    int pos;
    cout<<"Enter position to delete node: ";
    cin>>pos;
    deleteNode(head,pos);
    PrintLinkedList(head);

}