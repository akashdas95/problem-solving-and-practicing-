#include<bits/stdc++.h>
using namespace std;


class node{
public:
    int value;
    node* next;
};

void printList(node* head){
  while(head!=NULL){
    cout<<head->value<<"->";
    head=head->next;
  }
  cout<< "NULL"<<endl;
}

void reverseList(node* head){
  node *pre=NULL,*curr=head,*nxt;
  while(curr!=NULL){
    nxt=curr->next;
    curr->next=pre;

    pre=curr;
    curr=nxt;
  }
  head  = pre;
  while(head!=NULL){
        cout<<head->value<<"<-";
        head=head->next;
    }
    cout<<"NULL";
}

int main(){
  /*node* head;
  node* one;
  node* two;
  node* three;
  node* four;*/


  node*head;
  node*one= new node();
  node*two= new node();
  node*three= new node();
  node*four= new node();
  node*five= new node();

  one->value = 5;
  two->value = 7;
  three->value = 9;
  four->value = 10;
  five->value = 15;

  one->next = two;
  two->next = three;
  three->next = four;
  four->next = five;
  five->next = NULL;

  head = one;
  printList(head);
  reverseList(head);

  return 0;
}
