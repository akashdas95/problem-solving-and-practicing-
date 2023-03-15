#include<bits/stdc++.h>
using namespace std;


class node
{
public:
    int data;
    node* next;
    node* prev;

    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }

};


void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    head=n;
}


void insertAtTail(node* &head, int val)
{
    node* temp= head;
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    else
    {
        node* n=new node(val);
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
        n->prev=temp;
    }
}


void printList(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


void deletionAtFirst(node* &head)
{
    node* todelete= head;
    head=head->next;
    head->prev=NULL;

    delete todelete;
}

void deletion(node* &head, int pos)
{
    if(pos==1)
    {
        deletionAtFirst(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=pos)
    {
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    {
        temp->next->prev=temp->prev;
    }
     delete temp;
}

int listLength(node* &head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}


int main()
{
    node* head=NULL;
    int arr[]= {4,5,6,7,8,9};
    for(int i=0; i<6; i++)
    {
        insertAtTail(head,arr[i]);
    }
    printList(head);
    insertAtHead(head,0);
    printList(head);
    deletion(head,4);
    printList(head);
    deletionAtFirst(head);
    printList(head);

    return 0;
}
