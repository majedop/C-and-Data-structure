#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int id;
  Node *left;
  Node *right;
  Node *parent;
};

class Binary_tree
{
public:
  int count_node;
  Node *root;
  Binary_tree()
  {
    root = NULL;
    count_node = 0;
  }

  Node *Create_node(int id)
  {
    Node *New_node = new Node;
    New_node->id = id;
    New_node->left = NULL;
    New_node->right = NULL;
    New_node->parent = NULL;

    return New_node;
  }

  void Inserting(int id)
  {

    Node *newNode = Create_node(id);
    if (root == NULL)
    {
      count_node++;
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
        count_node++;
        return;
      }

      if (a->right != NULL)
      {
        q.push(a->right);
      }
      else
      {
        count_node++;
        a->right = newNode;
        newNode->parent = a;
        return;
      }
    }
  }

  int find_height(Node *a)
  {
    if (a == NULL)
    {
      return 0;
    }

    return max(find_height(a->left), find_height(a->right)) + 1;
  }

  int Is_perfect()
  {
    if (root == NULL)
    {
      cout << "Tree is empty";
      return 0;
    }
    int hight = find_height(root);
    if ((pow(2, hight) - 1) == count_node)
      return 1;
    else
      return 0;
  }

  int Is_complete()
  {
    
    if (Is_perfect())
      return 0;
    else
    return 1;
      }
};
int main()
{
  Binary_tree bt;
  bt.Inserting(1);
  bt.Inserting(2);
  bt.Inserting(3);
  bt.Inserting(4);
  bt.Inserting(5);
  bt.Inserting(6);
  bt.Inserting(7);
  bt.Inserting(1);
  bt.Inserting(2);
  bt.Inserting(3);
  bt.Inserting(4);
  bt.Inserting(5);
  bt.Inserting(6);
  bt.Inserting(7);
  bt.Inserting(7);

  if (bt.Is_perfect())
    cout << "Perfect binary tree"
         << "\n";
  else
    cout << "Not Perfect inary tree"
         << "\n";

  if (bt.Is_complete())
    cout << "Complete binary tree"
         << "\n";
  else
    cout << "Not complete binary tree"
         << "\n";

  return 0;
}