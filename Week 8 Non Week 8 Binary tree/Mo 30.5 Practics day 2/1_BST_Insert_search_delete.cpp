#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int value;
  Node *left;
  Node *right;
};
class Binary_search_tree
{
public:
  Node *root;
  Binary_search_tree()
  {
    root = NULL;
  }

  // New binary tree node creating
  Node *Creat_node(int value)
  {
    Node *newNode = new Node;
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
  }

  // new value inserting in binary tree
  void Inserting(int value)
  {
    Node *new_node = Creat_node(value);
    if (root == NULL)
    {
      root = new_node;
      return;
    }

    Node *cur = root;
    Node *prv = NULL;
    while (cur != NULL)
    {
      if (new_node->value > cur->value)
      {
        prv = cur;
        cur = cur->right;
      }
      else
      {
        prv = cur;
        cur = cur->left;
      }
    }
    if (new_node->value > prv->value)
    {
      prv->right = new_node;
    }
    else
    {
      prv->left = new_node;
    }
  }

  // Searcing in the binary tree
  bool Searching(int value)
  {
    Node *cur = root;
    while (cur != NULL)
    {
      if (value > cur->value)
      {
        cur = cur->right;
      }
      else if (value < cur->value)
      {
        cur = cur->left;
      }
      else
      {
        return true;
      }
    }
    return false;
  }

  void Deleting(int value)
  {
    if (root == NULL)
    {
      return;
    }

    Node *

        cur = root;
    Node *prv = NULL;
    while (cur != NULL)
    {
      if (value > cur->value)
      {
        prv = cur;
        cur = cur->right;
      }
      else if (value < cur->value)
      {
        prv = cur;
        cur = cur->left;
      }
      else
      {
        break;
      }
    }

    if (cur == NULL)
    {
      cout << "Value is not persent"
           << "\n";
      return;
    }

    // No child
    if (cur->left == NULL && cur->right == NULL)
    {
      if (prv->left != NULL && prv->left->value == cur->value)
      {
        prv->left = NULL;
      }
      else
      {
        prv->right = NULL;
      }
      delete cur;
    }
    // 1 child left or right
    if (cur->left != NULL && cur->right == NULL)
    {
      if (prv->left != NULL && prv->left->value == value)
      {
        prv->left = cur->left;
      }
      else
      {
        prv->right = cur->left;
      }
      delete cur;
      return;
    }

    if (cur->left == NULL && cur->right != NULL)
    {
      if (prv->left != NULL && prv->left->value == value)
      {
        prv->left = cur->right;
      }
      else
      {
        prv->right = cur->right;
      }
      delete cur;
      return;
    }

    // if cur node have 2 child
   Node* temp = cur->right;
   while (temp->left!=NULL)
   {
     temp = temp->left;
   }
   int saved = temp->value;
  Deleting(saved);
  cur->value = saved;
  }


  // All tree node print using BFS
  void BFS()
  {
    if (root == NULL)
    {
      return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
      int l = -1, r = -1;
      Node *a = q.front();
      q.pop();
      if (a->left != NULL)
      {
        l = a->left->value;
        q.push(a->left);
      }
      if (a->right != NULL)
      {
        r = a->right->value;
        q.push(a->right);
      }

      cout << "Value = " << a->value << " , "
           << "Left = " << l << " , "
           << "Right = " << r << "\n";
    }
  }
};
int main()
{
  Binary_search_tree bst;
  bst.Inserting(6);
  bst.Inserting(4);
  bst.Inserting(3);
  bst.Inserting(5);
  bst.Inserting(7);
  bst.Inserting(8);
  bst.BFS();
  cout << "\n";
  bst.Deleting(6);
  bst.BFS();

  return 0;
}