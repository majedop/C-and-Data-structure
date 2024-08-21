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
  
  // find tree minimum value
  // complextiy = O(height)
  int Find_min()
  {
    if(root == NULL)
    {
      cout << "Tree is empty" <<"\n";
      return -1;
    }
    Node* cur = root;
    while (cur->left != NULL)
    {
      cur = cur->left;
    }
    return cur->value;
  }
  
  // Find maxmimum value is the tree
  int Find_max() // complexity= O(height)
  {
    if(root == NULL)
    {
      cout << "Tree is empty" <<"\n";
      return -1;
    }
    
    Node* cur = root;
    while (cur->right != NULL)
    {
      cur = cur->right;
    }
    return cur->value;
    
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
  bst.Inserting(9);
  bst.Inserting(5);
  bst.Inserting(7);
  bst.Inserting(2);
  bst.BFS();
  cout << "\n";\
  cout << bst.Find_min() << "\n";
  cout << bst.Find_max() <<"\n";

  
  

  return 0;
}