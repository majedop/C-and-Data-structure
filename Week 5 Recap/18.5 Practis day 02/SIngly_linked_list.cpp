#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

class Linked_list
{
public:
  Node *head;
  int sz = 0;

  Linked_list()
  {
    head = NULL;
    sz = 0;
  }

  Node *Creat_Node(int value)
  {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    return newNode;
  }

  // Insert at head
  void Insert_at_head(int value)
  {
    sz++;
    Node *new_node = Creat_Node(value);
    if (head == NULL)
    {
      head = new_node;
      return;
    }

    new_node->next = head;
    head = new_node;
  }

  // get linked list size
  void getSize()
  {
    cout << sz << "\n";
  }

  // get Index number value
  int getValue(int index)
  {
    if (index < 0 || index > sz)
      return -1;

    Node *a = head;
    int cur_index = 0;
    while (a != NULL)
    {
      if (cur_index == index)
        return a->data;
      a = a->next;
      cur_index++;
    }
  }
  
  // delete zero element
  void deleteZero()
  {
    Node* a = head;
    while (a != NULL)
    {
      if(a->data != 0)
      {
        Node* neww = Creat_Node(a->data);
        cout << neww->data <<" ";
      }
      a = a->next;
    }
  }
  
  bool hasDuplicate()
  {
    bool found = false;
    int cnt = 0;
    Node* a = head;
    while (a != NULL)
    {
      Node* b = a->next;
      while (b != NULL)
      {
        if(a->data == b->data)
        cnt++;

        if(cnt ==1)
        {
          found = true;
          return found;
        }

        b = b->next;
      }
      a = a->next;
    }
    return found;
  }
  // all value print
  void print_all()
  {
    Node *a = head;
    while (a != NULL)
    {
      cout << a->data << " ";
      a = a->next;
    }
    cout << "\n";
  }
};
int main()
{
  Linked_list l;
  l.Insert_at_head(5);
  l.Insert_at_head(6);
  l.Insert_at_head(1);
  l.Insert_at_head(2);
  l.Insert_at_head(6);
  l.print_all();
  if(l.hasDuplicate())
  cout <<"True"<<"\n";
  else
  cout << "False" <<"\n";
  /* cout << l.getValue(3) << "\n";
  l.deleteZero(); */
  

  return 0;
}