#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    node* left;
    node* right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);

}

void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}


void lvlorderprint(node* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* n=q.front();
        q.pop();
        if(n!=NULL)
        {
            cout<<n->data;
            if(n->left!=NULL)
            {
                q.push(n->left);
            }
            if(n->right!=NULL)
            {
                q.push(n->right);
            }
        }
        else if(!q.empty())
        {
            q.push(NULL);
        }
    }
}


int countnode(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return countnode(root->left)+ countnode(root->right)+1;
}

int sumofnode(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return sumofnode(root->left)+ sumofnode(root->right)+root->data;
}

int heightoftree(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int Lheight= heightoftree(root->left);
    int Rheight= heightoftree(root->right);
    return max(Lheight,Rheight)+1;
}

void flattenTree(node* root)
{
    if(root==NULL || (root->left==NULL && root->right==NULL))
    {
        return;
    }
    if(root->left!=NULL)
    {
        flattenTree(root->left);

        node* temp=root->right;

        root->right= root->left;
        root->left=NULL;

        node* t= root->right;
        while(t->right!=NULL)
        {
            t=t->right;
        }

        t->right=temp;
    }

    flattenTree(root->right);
}

int main()
{

    node* root= new node(4);

    root->left=new node(9);
    root->right=new node(5);

    root->left->left=new node(1);
    root->left->right=new node(3);
    //root->right->left=new node(6);
    root->right->right=new node(6);

    /*preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    lvlorderprint(root);
    cout<<endl;
    cout<<countnode(root);
    cout<<endl;
    cout<<heightoftree(root);*/
    flattenTree(root);
    inorder(root);
    return 0;
}
