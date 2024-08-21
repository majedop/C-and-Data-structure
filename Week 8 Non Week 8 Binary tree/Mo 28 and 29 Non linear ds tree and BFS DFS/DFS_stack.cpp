#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int id;
  Node *left;
  Node *right;
  Node *parent;

  Node(int val)
  {
    id = val;
    left = NULL;
    right = NULL;
    parent = NULL;
  }
};

class Binary_tree
{
public:
  Node *root;
  void Build_DFS()
  {
    Node *allnode[6];
    for (int i = 0; i < 6; i++)
    {
      allnode[i] = new Node(i);
    }
    allnode[0]->left = allnode[1];
    allnode[0]->right = allnode[2];

    allnode[1]->left = allnode[3];
    allnode[1]->right = allnode[4];
    allnode[1]->parent = allnode[0];

    allnode[2]->left = allnode[5];
    allnode[2]->parent = allnode[0];

    allnode[5]->parent = allnode[2];

    allnode[3]->parent = allnode[1];
    allnode[4]->parent = allnode[1];
    root = allnode[0];
  }
  
  // Depth-first search is an algorithm for traversing or
  // searching tree or graph data structures. 
  void DFS(Node *a)
  {

    if(a == NULL)
    {
      return;
    }

    cout << a->id <<" ";
    DFS(a->left);
    DFS(a->right);
  }
};

int main()
{
  Binary_tree bt;
  bt.Build_DFS();
  bt.DFS(bt.root);

  return 0;
}