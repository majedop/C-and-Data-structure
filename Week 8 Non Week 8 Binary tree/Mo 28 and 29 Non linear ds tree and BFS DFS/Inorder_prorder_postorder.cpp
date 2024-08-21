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

  /*
  1) Traverse the left subtree, call inorder(left subtree)
  2) visit the root
  3) Traverse the right subtree call inorder(right subtree) */
  void Inorder(Node *a)
  {
    if (a == NULL)
    {
      return;
    }

    Inorder(a->left);
    cout << a->id << " ";
    Inorder(a->right);
  }

/*
 1) visit the root
 2) Traverse the left subtree, call inorder(left subtree)
 3) Traverse the right subtree call inorder(right subtree) 
 */
  void Preorder(Node *a)
  {
    if (a == NULL)
    {
      return;
    }
    cout << a->id << " ";
    Preorder(a->left);
    Preorder(a->right);
  }

  /*
   1) Traverse the left subtree, call inorder(left subtree)
   2) Traverse the right subtree call inorder(right subtree)
  3) visit the root
   */
  void Postorder(Node *a)
  {
    if (a == NULL)
      return;

    Postorder(a->left);
    Postorder(a->right);
    cout << a->id << " ";
  }
};

int main()
{
  Binary_tree bt;
  bt.Build_DFS();
  bt.Inorder(bt.root);
  cout << "\n";
  bt.Preorder(bt.root);
  cout << "\n";
  bt.Postorder(bt.root);

  return 0;
}