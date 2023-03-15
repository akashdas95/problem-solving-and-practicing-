#include<iostream>
using namespace std;


//USING ARRAY
/*#define n 100

class queue
{
    int* arr;
    int front;
    int back;
    public:
        queue()
        {
          arr=new int[n];
          front=-1;
          back=-1;
        }

        void push(int x)
        {
            if(back==n-1)
            {
                cout<<"queue overflow"<<endl;
                return;
            }
            back++;
            arr[back]=x;

            if(front==-1)
            {
                front++;
            }
        }

        void pop()
        {
            if(front==-1 || front>back)
            {
                cout<<"no element in the queue"<<endl;
                return;
            }

            front++;
        }

        int peek()
        {
            if(front==-1 || front>back)
            {
                cout<<"no element in the queue"<<endl;
                return -1;
            }

            return arr[front];
        }

        bool empty()
        {
            if(front==-1 || front>back)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};*/

//USING LINKED LIST
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


class queue
{
    node* front;
    node* back;
    public:
    queue()
    {
       front=NULL;
       back=NULL;
    }

    void push(int x)
    {
        node* n=new node(x);
        if(front==NULL)
        {
            front=n;
            back=n;
            return;
        }

        back->next=n;
        back=n;
    }

    void pop()
    {
        if(front==NULL)
        {
            cout<<"queue has no element";
            return;
        }

        node* todelete= front;
        front=front->next;
        delete todelete;
    }

    int peek()
    {
        if(front==NULL)
        {
            cout<<"queue has no element";
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
      if(front==NULL)
      {
          return true;
      }
      else
      {
          return false;
      }
    }
};





int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    q.pop();
    q.pop();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;

    return 0;
}
