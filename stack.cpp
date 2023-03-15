#include<iostream>
using namespace std;


#define n 100

class stack
{
    int* arr;
    int top;

public:
    stack()
    {
       arr= new int[n];
       top=-1;
    }

    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"stack overflow"<<endl;
        }

        top++;
        arr[top]=x;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"no element in stack"<<endl;
        }

        top--;
    }

    int Top()
    {
        if(top==-1)
        {
            cout<<"no element in stack"<<endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }


    bool empty()
    {
        if(top==-1)
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
    stack st;
    st.push(1);
    st.push(2);
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty();
    return 0;
}
