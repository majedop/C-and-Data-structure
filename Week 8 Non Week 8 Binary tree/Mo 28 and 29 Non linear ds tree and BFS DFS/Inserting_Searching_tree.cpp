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
  Node(int idd, int val)
  {
    id = idd;
    value = val;
    left = NULL;
    right = NULL;
    parent = NULL;
  }
};

class Binary_tree
{
public:
  Node *root;

  Binary_tree()
  {
    root = NULL;
  }

  void inserting(int id, int val)
  {
    Node *newNode = new Node(id, val);
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
        q.push(a->left);
      else
      {
        a->left = newNode;
        newNode->parent = a;
        return;
      }

      if (a->right != NULL)
        q.push(a->right);
      else
      {
        a->right = newNode;
        newNode->parent = a;
        return;
      }
    }
  }

  void BFS()
  {
    if (root == NULL)
      return;

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

      cout << "Node id = " << a->id << " , "
           << "Parent = " << p << " , "
           << "Left = " << l << " , "
           << "Right = " << r << "\n";
    }
  }

  void Searching(Node *a, int val)
  {
    if (a == NULL)
    {
      return;
    }
    if (a->value == val)
      cout << a->id << " ";
    Searching(a->left, val);
    Searching(a->right, val);
  }
};

int main()
{
  Binary_tree bt;
  bt.inserting(0, 5);
  bt.inserting(1, 10);
  bt.inserting(2, 10);
  bt.inserting(3, 9);
  bt.inserting(4, 8);
  bt.inserting(5, 5);
  bt.inserting(6, 7);
  bt.Searching(bt.root, 5);

  return 0;
}