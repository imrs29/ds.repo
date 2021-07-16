#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void InsertAtTail(node *&head, int val){
    node *n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }

    node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp ->next = n;
}

void display(node *head){
    node *temp = head;
    while(temp != NULL){
        cout << temp ->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


node *LastToFront(node *head){

    if(head == NULL || (head)->next == NULL)
    return NULL;

     node *lastptr = head;
     node *secondLastptr = NULL;

     while(lastptr->next != NULL){
        secondLastptr = lastptr;
        lastptr = lastptr->next;
     }

     secondLastptr->next = NULL;
     lastptr->next = head;
     head = lastptr;
}

int main(){
    node *head = NULL;
    InsertAtTail(head,2);
    InsertAtTail(head,2);
    InsertAtTail(head,4);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    display(head);
    node *afterchanges = LastToFront(head);
    display(afterchanges);
    return 0;
}