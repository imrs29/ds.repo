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


node *detectandremoveloop(node *head){

    node* slow = head;
    node* fast = head;

    while(slow != NULL and fast != NULL and fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }
    }

    if(slow != fast)
        return NULL;

    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;


}

int main(){
    node *head = NULL;
    InsertAtTail(head,50);
    InsertAtTail(head,20);
    InsertAtTail(head,15);
    InsertAtTail(head,4);
    InsertAtTail(head,10);
    head->next->next->next->next->next = head->next->next;

    node *res = detectandremoveloop(head);
    if(res == NULL)
        cout <<"No";
    else
        cout<<"Yes"<<res->data;
    return 0;
}