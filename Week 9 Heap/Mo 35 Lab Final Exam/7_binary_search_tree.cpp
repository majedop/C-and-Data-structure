#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int value;
  Node *Left;
  Node *Right;
  Node(int val)
  {
    value = val;
    Left = NULL;
    Right = NULL;
  }
};

class BST
{
public:
  Node *root;
  BST()
  {
    root = NULL;
  }

  // Insert new node in BST
  void Insert(int value)
  {
    Node *newNode = new Node(value);
    if (root == NULL)
    {
      root = newNode;
      return;
    }

    Node *prev = NULL;
    Node *cur = root;
    while (cur != NULL)
    {
      if (newNode->value < cur->value)
      {
        prev = cur;
        cur = cur->Left;
      }
      else
      {
        prev = cur;
        cur = cur->Right;
      }
    }
    if (newNode->value < prev->value)
      prev->Left = newNode;
    else
      prev->Right = newNode;
  }

  // Search tree value
  bool Search(int value)
  {
    Node *cur = root;
    while (cur != NULL)
    {
      if (value < cur->value)
        cur = cur->Left;
      else if (value > cur->value)
        cur = cur->Right;
      else
      {
        return true;
      }
    }
    return false;
  }
};

int main()
{
  BST bst;
  bst.Insert(10);
  bst.Insert(20);
  bst.Insert(25);
  bst.Insert(50);
  bst.Insert(8);
  bst.Insert(9);
  cout << bst.Search(10) << "\n"; // 1
  cout << bst.Search(9) << "\n";  // 1
  cout << bst.Search(20) << "\n"; // 1
  cout << bst.Search(60) << "\n"; // 0

  return 0;
}