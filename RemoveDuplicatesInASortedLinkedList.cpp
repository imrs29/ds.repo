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


node *RemoveDuplicates(node *head){

   node *temp = head;
   if(!temp)
    return NULL;
    
    while(head->next != NULL){
        if(head->data == head->next->data){
            head->next = head->next->next;
        }
        else
            head = head->next;
    }
    return temp;
}

int main(){
    node *head = NULL;
    InsertAtTail(head,2);
    InsertAtTail(head,2);
    InsertAtTail(head,4);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    display(head);
    node *afterdeletion = RemoveDuplicates(head)
    display(afterdeletion);
    return 0;
}