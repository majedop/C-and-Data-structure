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

  Node *Creat_node(int value)
  {
    Node *newNode = new Node;
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
  }

  // Inserting value in Binary search tree
  void inserting(int value)
  {
    Node *newNode = Creat_node(value);
    if (root == NULL)
    {
      root = newNode;
      return;
    }

    Node *cur = root;
    Node *prv = NULL;
    while (cur != NULL)
    {
      if (newNode->value > cur->value)
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
    if (newNode->value > prv->value)
    {
      prv->right = newNode;
    }
    else
    {
      prv->left = newNode;
    }
  }

  // Deleting a node in the tree
  void Deleting(int value)
  {
    if (root == NULL)
    {
      cout << "Tree are empty";
      return;
    }
    Node *cur = root;
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
      cout << "Value is not present"
           << "\n";
      return;
    }

    // no child ar jonno
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

    // One child in the delete node

    // cur node ar left child a jodi value thake
    // seta pernt ar sathe  cur ar left taa add hobe
    if (cur->left != NULL && cur->right == NULL)
    {
      if (prv->left != NULL && prv->left->value == cur->value)
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
    // cur node ar right child a jodi value thake
    // seta parent ar sathe cur ar right node taa add hobe
    if (cur->left == NULL && cur->right != NULL)
    {
      if (prv->left != NULL && prv->left->value == cur->value)
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
    // cur node have two child 
    Node* temp = cur->right;
    while (temp->left != NULL)
    {
      temp = temp->left;
    }
    int saved = temp->value;
    Deleting(saved);
    cur->value = saved;
  }

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
      cout << "Node id = " << a->value << " , "
           << "Left = " << l << " , "
           << "Right = " << r << "\n";
    }
  }
};
int main()
{
  Binary_search_tree bst;
  bst.inserting(6);
  bst.inserting(4);
  bst.inserting(3);
  bst.inserting(5);
  bst.inserting(7);
  bst.inserting(8);
  bst.BFS();
  cout << "\n";
  bst.Deleting(6);
  bst.BFS();
  return 0;
}