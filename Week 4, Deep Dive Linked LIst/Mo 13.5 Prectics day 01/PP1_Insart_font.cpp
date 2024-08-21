#include <bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int data;
  Node* next;
};

class Linked_list
{
  public:
  Node* head;
  int sz;
  Linked_list()
  {
    head = NULL;
  }

  Node* Creat_node(int value)
  {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    return newNode;
    
  }

  void Inserting_front(int value)
  {
    Node* neww= Creat_node(value);

    if(head == NULL)
    {
      head = neww;
      return;
    }
    neww->next = head;
    head = neww;
  }

  void Print_all()
  {
    Node* a = head;
    while (a!= NULL)
    {
      cout <<a->data <<" ";
      a = a->next;
    }
    cout <<"\n";
  }

  void new_element_add(int value)
  {
    Inserting_front(value);
  }

};

int main()
{
  Linked_list l;
  for (int i = 5; i >=1; i--)
  {
    l.Inserting_front(i);
  }
  l.Print_all();
  l.new_element_add(0);
  l.Print_all();
  


  return 0;
}