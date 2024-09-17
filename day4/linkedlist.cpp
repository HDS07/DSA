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

void insertnode(node* &head,int value){
    node* temp=new node(value);
    temp->add=head;
    head=temp;

}
void printf(node* &head){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->add;
    }
}

int main(){
    node* node1= new node (10);
    node* node2= new node (20);
    node1->add=node2;
    node* head=node1;

    printf(head);
    cout<<endl;
    insertnode(head,30);

    printf(head);

}