#include<bits/stdc++.h>
using namespace std;


class node{
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
    n->next=head;
    head=n;
}

void insertAtTail(node* &head, int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
    }
    else
    {
        node* n= new node(val);
        node* temp=head;
        while(temp->next!=NULL)
        {
            temp= temp->next;
        }
        temp->next=n;
    }
}

void printList(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


bool searchKey(node* head, int key)
{
    node* temp= head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}


void deleteHead(node* &head)
{
    node* headDelete= head;
    head=head->next;
    delete headDelete;
}



void deletion(node* &head, int val)
{
    node* temp=head;
    if(temp==NULL)
    {
        return;
    }
    if(temp->next==NULL)
    {
        deleteHead(temp);
        return;
    }
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* deleteNode= temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
}


node* reverseList(node* &head)
{
    node* currptr= head;
    node* prevptr= NULL;
    node* nextptr;

    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr= currptr;
        currptr= nextptr;
    }
    return prevptr;
}


node* reverseRecursive(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newHead= reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newHead;
}


node* reverseK(node* &head, int k)
{
    node* currptr=head;
    node* prevptr=NULL;
    node* nextptr;

    int count=0;
    while(currptr!=NULL && count<k)
    {
        nextptr= currptr->next;
        currptr->next= prevptr;

        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL)
    {
        head->next= reverseK(nextptr,k);
    }
    return prevptr;

}

void makeCycle(node* &head, int pos)
{
    node* temp=head;
    node* startnode;

    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startnode=temp;
        }
        count++;
        temp=temp->next;
    }
    temp->next=startnode;
}

bool detectCycle(node* &head)
{
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast= fast->next->next;
        if(slow==fast)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head)
{
    node* slow=head;
    node* fast=head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    slow=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
}

int listLength(node* &head)
{
    node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}


node* appendk(node* &head, int k)
{
    int l = listLength(head);
    node* newHead;
    node* newTail;
    node* tail=head;
    int count=1;
    while(tail->next!=NULL)
    {
        if(count==l-k)
        {
            newTail=tail;
        }
        if(count==l-k+1)
        {
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    tail->next=head;
    newTail->next=NULL;
    return newHead;
}


void intersect(node* &head1, node* &head2, int pos)
{
    node* temp1=head1;
    node* temp2=head2;
    pos--;
    while(pos--)
    {
        temp1=temp1->next;
    }
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
}


int intersection(node* &head1, node* &head2)
{
    int l1= listLength(head1);
    int l2= listLength(head2);
    int d=0;
    node* ptr1;
    node* ptr2;
    if(l1>l2)
    {
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else
    {
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d)
    {
        ptr1=ptr1->next;
        d--;
    }

    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2)
        {
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    return -1;
}


node* mergeList(node* &head1, node* &head2)
{
    node* ptr1=head1;
    node* ptr2=head2;
    node* dummy= new node(-1);
    node* ptr3 = dummy;

    while(ptr1!=NULL && ptr2!= NULL)
    {
        if(ptr1->data < ptr2->data)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else
        {
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    while(ptr1!=NULL)
    {
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    while(ptr2!=NULL)
    {
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return dummy->next;
}


node* mergeListRecursive(node* &head1, node* &head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    node* result;
    if(head1->data < head2->data)
    {
        result=head1;
        result->next=mergeListRecursive(head1->next,head2);
    }
    else
    {
        result=head2;
        result->next=mergeListRecursive(head1,head2->next);
    }

    return result;
}


int main()
{
    node* head1=NULL;
    int arr[]= {1,3,5,9,10,12};
    for(int i=0; i<6; i++)
    {
        insertAtTail(head1,arr[i]);
    }
    node* head2=NULL;
    int arr1[]= {4,6,7,11};
    for(int i=0; i<4; i++)
    {
        insertAtTail(head2,arr1[i]);
    }
    //printList(head);
    //deletion(head,3);
    //printList(head);
    //deleteHead(head);
    //printList(head);
    //cout<<searchKey(head,6);
    /*node* newHead = reverseList(head);
    printList(newHead);*/
    //node* newhead = reverseRecursive(head);
    //printList(newhead);
    //node* HEAD = reverseK(head,3);
    //makeCycle(head,3);
    //cout<<detectCycle(head)<<endl;
    //removeCycle(head);
    //printList(head);
    //node* newhead = appendk(head,3);
    //printList(newhead);
     //intersect(head1,head2,4);
     printList(head1);
     printList(head2);
     //cout<<intersection(head1,head2);
     node* newmerge = mergeListRecursive(head1,head2);
     printList(newmerge);
     return 0;
}
