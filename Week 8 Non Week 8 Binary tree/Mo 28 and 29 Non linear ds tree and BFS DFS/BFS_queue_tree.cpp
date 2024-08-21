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
  void Build_BFS()
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
      {
        p = a->parent->id;
      }
      cout << "Node id = " << a->id << " , "
           << "Parent = " << p << " , "
           << "Left = " << l << " , "
           << "Right = " << r << "\n";
    }
  }

  
};
int main()
{
  Binary_tree bt;
  bt.Build_BFS();
  bt.BFS();
  


  return 0;
}