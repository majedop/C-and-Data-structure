#include <bits/stdc++.h>
using namespace std;

class node
{
public:
  int data;
  node *next;
};
class Link_list
{
public:
  node *head;
  Link_list()
  {
    head = NULL;
  }

  node *Creat_new_node(int value)
  {
    node *new_Node = new node;
    new_Node->data = value;
    new_Node->next = NULL;
    return new_Node;
  }
 
  void Insarting(int value)
  {
    node *neww = Creat_new_node(value);
    if (head == NULL)
    {
      head = neww;
      return;
    }
    neww->next = head;
    head = neww;
  }

  void Traversing()
  {
    node *neww = head;
    while (neww != NULL)
    {
      cout << neww->data << " ";
      neww = neww->next;
    }
  }
  int Searching(int value)
  {
    node *a = head;
    int index = 0;
    while (a != NULL)
    {
      if (a->data == value)
      {
        return index;
      }
      a = a->next;
      index++;
    }
    return -1;
  }

  void all_value_searching(int value)
  {
    node *a = head;
    int index = 0;
    while (a != NULL)
    {
      if (a->data == value)
      {
        cout << "\n"
             << value << " value is " << index;
      }
      a = a->next;
      index++;
    }
  }
};

int main()
{
  Link_list l;
  l.Insarting(10);
  l.Insarting(30);
  l.Insarting(40);
  l.Insarting(10);
  l.Insarting(15);

  l.Traversing();
  int k = l.Searching(50);
  cout << "\nkth index is= " << k;
  l.all_value_searching(10);

  return 0;
}