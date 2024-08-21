#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
};
class linked_list
{
  public:
  Node* head;
  int size;

  linked_list()
  {
    head = NULL;
    size = 0;
  }
  
  Node* Creat_node(int value)
  {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    return newNode;
  }
  void Inserting_at_head(int value)
  {
    size++;
    Node* neww = Creat_node(value);
    if(head == NULL)
    {
      head = neww;
      return;
    }

    neww->next = head;
    head = neww;
  }

  void Inserting_at_spacice_postion(int value, int data)
  {
    Node* a = head ;
    while (a!=NULL)
    {
      if(a->data == value)
      {
        size++;
        Node* nw = Creat_node(data);
        nw->next = a->next;
        a->next = nw;
        return;
      }
      a = a->next;
    }
    cout <<value << " Does't exist in linked list\n";
  }

  void Traversing()
  {
    Node* a = new Node;
    a = head;
    while (a != NULL)
    {
      cout << a->data <<" ";
      a = a->next;
    }
    cout <<"\n";
  }

  int getSize()
  {
    return size;
  }

  void Reverse_Print_2(Node* a)
  {
    if(a == NULL)
    return;

    Reverse_Print_2(a->next);
    cout << a->data <<" ";
  }
  void Reverse_Print()
  {
    Reverse_Print_2(head);
    cout <<"\n";
  }



};
int main()
{
  linked_list l;
  l.Inserting_at_head(15);
  l.Inserting_at_head(20);
  l.Inserting_at_head(40);
  l.Inserting_at_head(50);
  l.Traversing();
  l.Reverse_Print();
 // l.Traversing();
  
  

  return 0;
}