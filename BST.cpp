#include<bits/stdc++.h>
using namespace std;


class node
{
public:
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

node* insertBST(node* root, int val)
{
    if(root==NULL)
    {
        return new node(val);
    }
    if(val < root->data)
    {
        root->left=insertBST(root->left, val);
    }
    else
    {
        root->right=insertBST(root->right, val);
    }

    return root;
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


node* searchBST(node* root, int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data == key)
    {
        return root;
    }
    if(root->data > key)
    {
        return searchBST(root->left, key);
    }

    return searchBST(root->right, key);
}


bool validBST(node* root, node* mn=NULL, node* mx=NULL)
{
    if(root==NULL)
    {
        return true;
    }
    if(mn!=NULL && root->data <= mn->data)
    {
        return false;
    }
    if(mx!=NULL && root->data >= mx->data)
    {
        return false;
    }

    bool leftvalid= validBST(root->left,mn,root);
    bool rightvalid= validBST(root->right,root,mx);

    return (leftvalid && rightvalid);
}


node* sortedarrtoBST(int arr[], int start, int end)
{
    //base case
    if(start>end)
    {
        return NULL;
    }

    int mid = (start+end)/2;

    node* root= new node(arr[mid]);

    root->left= sortedarrtoBST(arr,start,mid-1);
    root->right= sortedarrtoBST(arr,mid+1,end);

    return root;
}

bool isIdentical(node* root1, node* root2)
{
    if(root1==NULL && root2==NULL)
    {
        return true;
    }
    else if(root1 == NULL || root2 == NULL)
    {
        return false;
    }
    else
    {
        bool cond1= root1->data==root2->data;
        bool cond2= isIdentical(root1->left, root2->left);
        bool cond3= isIdentical(root1->right, root2->right);

        return cond1 && cond2 && cond3;
    }
}


main()
{
    node* root=new node(3);
    root->left=new node(1);
    root->right=new node(5);
    /*root= insertBST(root, 5);
    insertBST(root, 2);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 3);
    insertBST(root, 7);

    inorder(root);
    if(searchBST(root, 9)==NULL)
    {
        cout<<"key does not exist";
    }
    else
    {
        cout<<"key exist";
    };
    if(validBST(root))
    {
        cout<<"valid BST";
    }
    else
    {
        cout<<"invalid BST";
    };*/

    /*int arr[]={10,20,30,40,50};
    node* Root = sortedarrtoBST(arr,0,4);
    preorder(Root);*/
    /*if(isIdentical(root1,root2))
    {
        cout<<"BSTs are identical";
    }
    else
    {
        cout<<"BSTs are not identical";
    }*/
    return 0;
}
