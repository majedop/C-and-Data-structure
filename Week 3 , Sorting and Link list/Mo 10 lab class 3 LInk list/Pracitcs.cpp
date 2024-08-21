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
  Linked_list()
  {
    head = NULL;
  }

  Node* Creat_node(int value)
  {
    Node* new_node = new Node;
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
  }

  void Insarting(int value)
  {
    Node* new_node = Creat_node(value);
    if(head == NULL)
    {
      head = new_node;
      return;
    }

    new_node->next = head;
    head = new_node;
  }

  void Traversing()
  {
    Node* ar = head;
    while(ar!= NULL)
    {
      cout << ar->data <<" ";
      ar = ar->next;
    }
  }

  int searching(int value)
  {
    Node* ar = head;
    int index= 0;
    while (ar!= NULL)
    {
      if(ar->data == value)
      {
        return index;
      }
      ar = ar->next;
      index++;
    }
     return -1;
  }

  void all_value_search(int value)
  {
    Node* ar = head;
    int indx = 0;
    while (ar != NULL)
    {
      if(ar->data == value)
      {
        cout << "kth emiment are = " << indx <<"\n";
      }
      ar = ar->next;
      indx++;
    }
    
  }


};
int main()
{
  Linked_list l;
  l.Insarting(10);
  l.Insarting(30);
  l.Insarting(60);
  l.Insarting(90);
  l.Insarting(30);
  l.Insarting(10);

  l.Traversing();
  int index = l.searching(50);
 cout <<"\nKth value is= " << index <<"\n";
 l.all_value_search(30);


  return 0;
}