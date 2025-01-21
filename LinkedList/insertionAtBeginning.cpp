#include<bits/stdc++.h>
using namespace std;

class NODE{
    public:
    int data;
    NODE* next;

    NODE(int d){
        data = d;
        next=NULL;
    }
};

void InsertionAtBegining(NODE* &head , int d){
    NODE* Node2 = new NODE(d);
    Node2->next=head;
    head=Node2;
}

void PrintLinkedList(NODE* & head){
    NODE* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
    NODE* head = new NODE(10);
    // cout<< head->data << endl;

    InsertionAtBegining(head, 20);
    // cout<< head->data << endl;

    InsertionAtBegining(head, 30);
    // cout<< head->data << endl;

    PrintLinkedList(head);



}