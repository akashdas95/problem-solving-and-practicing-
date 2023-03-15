#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head, int val)
{
    node* n=new node(val);

    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}


void insertAtTail(node* &head, int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }

    node* n=new node(val);
    node* temp=head;

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void printList(node* head)
{
    node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}


void deletionAtHead(node* &head)
{
    node* temp= head;
    while(temp->next!=head)
   {
       temp=temp->next;
   }

   node* todelete=head;
   temp->next=head->next;
   head=head->next;
   delete todelete;
}

void deletion(node* &head, int pos)
{
   if(pos==1)
   {
       deletionAtHead(head);
       return;
   }
   node* temp= head;
   int count=1;

   while(count!=pos-1)
   {
       temp=temp->next;
       count++;
   }

   node* todelete= temp->next;
   temp->next= temp->next->next;

   delete todelete;

}

int main()
{

    node* head=NULL;
    int arr[]={1,2,3,4,5,6,7,8,9};
    for(int i=0; i<9; i++)
    {
        insertAtTail(head,arr[i]);
    }
    printList(head);
    insertAtHead(head,0);
    printList(head);
    deletion(head,1);
    printList(head);
    return 0;

}
