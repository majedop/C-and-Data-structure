#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int id;
  Node* left;
  Node* right;
  Node* parent;
};

class Binary_tree
{
  public:
  int count_node;
  Node* root;
  Binary_tree()
  {
    root = NULL;
    count_node = 0;
  }

  Node* Create_node(int id)
  {
    Node* New_node = new Node;
    New_node->id = id;
    New_node->left = NULL;
    New_node->right = NULL;
    New_node->parent = NULL;
    
    return New_node;
  }

  void Inserting(int id)
  {

    Node * newNode = Create_node(id);
    if(root ==  NULL)
    {
      count_node++;
      root = newNode;
      
      return;
    }
    
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
      Node* a = q.front();
      q.pop();
      if(a->left != NULL)
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

      if(a->right != NULL)
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
  
  int find_height(Node *a )
  {
    if(a == NULL)
    {
      return  0;
    }

    return max(find_height(a->left) , find_height(a->right))+1;
  }



  void Is_compelete()
  {
    
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
  bt.Inserting(8);
  



  return 0;
}