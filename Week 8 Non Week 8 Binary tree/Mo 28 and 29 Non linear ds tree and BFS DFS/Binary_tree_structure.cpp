#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int id;
  Node *left;
  Node *right;
  Node *parent;

  Node(int in_id)
  {
    id = in_id;
    left = NULL;
    right = NULL;
    parent = NULL;
  }
};

class Binary_tree
{
public:
  Node *root;
  Node *all_node[6];
  Binary_tree()
  {
    root = NULL;
  }

  void build_binary_tree()
  {
    for (int i = 0; i < 6; i++)
    {
      all_node[i] = new Node(i);
    }

    all_node[0]->left = all_node[1];
    all_node[0]->right = all_node[2];

    all_node[1]->left = all_node[5];
    all_node[1]->parent = all_node[0];

    all_node[2]->left = all_node[3];
    all_node[2]->right = all_node[4];
    all_node[2]->parent = all_node[0];

    all_node[5]->parent = all_node[1];

    all_node[3]->parent = all_node[2];
    all_node[4]->parent = all_node[2];
    root = all_node[0];
  }

  void print_all_node()
  {
    for (int i = 0; i < 6; i++)
    {
      int p = -1;
      int l = -1;
      int r = -1;
      if (all_node[i]->parent != NULL)
        p = all_node[i]->parent->id;

      if (all_node[i]->left != NULL)
        l = all_node[i]->left->id;

      if (all_node[i]->right != NULL)
        r = all_node[i]->right->id;

      cout << "Node = " << i << " , "
           << "Parent = " << p << " , "
           << "Left = " << l << " , "
           << "Right = " << r << "\n";
    }
  }
};
int main()
{
  Binary_tree bt;
  bt.build_binary_tree();
  bt.print_all_node();

  return 0;
}