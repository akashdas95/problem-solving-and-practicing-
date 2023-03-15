#include<bits/stdc++.h>
using namespace std;


class node
{
public:
  int key;
  node* left;
  node* right;

  node(int data)
  {
      key=data;
      left=NULL;
      right=NULL;
  }
};

void getVerticalOrder(node* root, int hdis, map<int,vector<int>> &m)
{
    if(root==NULL)
    {
        return;
    }
    m[hdis].push_back(root->key);
    getVerticalOrder(root->left,hdis-1,m);
    getVerticalOrder(root->right,hdis+1,m);
}


int main()
{
    node* root= new node(10);
    root->left= new node(7);
    root->right= new node(4);
    root->left->left= new node(3);
    root->left->right= new node(11);
    root->right->left= new node(14);
    root->right->right= new node(6);

    map<int,vector<int> > m;
    int hdis=0;

    getVerticalOrder(root,hdis,m);

    map<int,vector<int>> :: iterator it;
    for(it=m.begin(); it!=m.end();it++)
    {
        for(int i=0; i<(it->second).size(); i++)
        {
            cout<<(it->second)[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
