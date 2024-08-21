#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int id;
  int value;
  Node *left;
  Node *right;
  Node *parent;
};

class Binary_tree
{
public:
  Node *root;
  Binary_tree()
  {
    root = NULL;
  }

  Node *Creat_node(int id, int value)
  {
    Node *newNode = new Node;
    newNode->id = id;
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->parent = NULL;

    return newNode;
  }

  void Inserting(int id, int value)
  {
    Node *newNode = Creat_node(id, value);
    if (root == NULL)
    {
      root = newNode;
      return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
      Node *a = q.front();
      q.pop();

      if (a->left != NULL)
      {
        q.push(a->left);
      }
      else
      {
        a->left = newNode;
        newNode->parent = a;
        return;
      }

      if (a->right != NULL)
      {
        q.push(a->right);
      }
      else
      {
        a->right = newNode;
        newNode->parent = a;
        return;
      }
    }
  }
  void BSF()
  {
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
      int l = -1, r = -1, p = -1;
      Node *a = q.front();
      q.pop();

      if (a->left != NULL)
      {
        l = a->left->id;
        q.push(a->left);
      }
      if (a->right != NULL)
      {
        r = a->right->id;
        q.push(a->right);
      }
      if (a->parent != NULL)
        p = a->parent->id;

      cout << "Node id " << a->id << " , "
           << "Parent = " << p << " , "
           << "Left = " << l << " , "
           << "Rigth = " << r << "\n";
    }
  }

  void  Searching(Node* a , int value)
  {
    if(a == NULL)
    {
      return;
    }
    if(a->value == value)
    cout << a->id <<" ";

    Searching(a->left, value);
    Searching(a->right, value);
  }
};
int main()
{
  Binary_tree bt;
  bt.Inserting(0, 5);
  bt.Inserting(1, 6);
  bt.Inserting(2, 5);
  bt.Inserting(3, 7);
  bt.Inserting(4, 8);
  bt.Inserting(5, 2);
  bt.Inserting(6, 5);
  bt.Searching(bt.root, 5);

  return 0;
}