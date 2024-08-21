#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int data;
  Node* prv;
  Node* next;
};

class Doubly_linked_list
{
  public:
  Node* head;
  int sz = 0;

  Doubly_linked_list()
  {
    head = NULL;
    sz = 0;
  }

  Node* Creat_Node(int value)
  {
    Node* new_node = new Node;
    new_node->data = value;
    new_node->prv = NULL;
    new_node->next = NULL;

    return new_node;
  }

  void Insert_at_head(int value)
  {
    sz++;
    Node* newNode = Creat_Node(value);
    if(head == NULL)
    {
      head = newNode;
      return;
    }

    head->prv = newNode;
    newNode->next = head;
    head = newNode;
  }

  void delete_at_head()
  {
    if(head == NULL)
    {
      cout <<"All node is already empty" <<"\n";
      return;
    }
   sz--;
    Node* a = head;
    head = a->next;

    delete a;
  }

  void deleteMid()
  {
    Node*  a = head;
    int cur_index = 0;
    int index = sz/2;
    
    if(index <=0)
    {
      delete_at_head();
      return;
    }
    while (cur_index != index)
    {
      a = a->next;
      cur_index++;
    }
    sz--;
    Node* b = a->prv;
    Node* c = a->next;
    b->next = c;
    c->prv = b;
  }

  int getMax()
  {
    Node* a = head;
    int max = a->data;
    while (a != NULL)
    {
      Node* b = a->next;
      while (b != NULL)
      {
         if(b->data > max)
         {
          max = b->data;
         }
         b = b->next;
      }
      a = a->next;
    }
    return max;
    
  }


  void Travering()
  {

    Node* a = head;
    while (a != NULL)
    {
      cout << a->data <<" ";
      a= a->next;
    }
    cout <<"\n";
  }

  void deleteMax()
  {
    Node *a = head;
    int max = getMax();
    while (a != NULL)
    {
      if(a->data != max)
      {
        Node* neww = Creat_Node(a->data);
        cout << neww->data <<" ";
      }
      a = a->next;
    }
  }

  int getSize()
  {
    return sz;
  }
  
};

int main()
{

  Doubly_linked_list dl;
  dl.Insert_at_head(5);
  dl.Insert_at_head(4);
  dl.Insert_at_head(6);
  dl.Insert_at_head(6);
  dl.Insert_at_head(3);
  dl.Travering();
  cout << dl.getMax() <<"\n";
  dl.deleteMax();
  


  return 0;
}