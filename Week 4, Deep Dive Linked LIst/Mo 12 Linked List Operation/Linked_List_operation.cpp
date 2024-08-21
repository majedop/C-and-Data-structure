#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int data;
  Node * next;

};
class Linked_list
{
  public:
  Node* head;
  int size ;
  
  Linked_list()
  {
    head =NULL;
    size =0;
  }

  // New Node Creat kora node value set kory dea
  Node* Creat_Node(int value)  
  {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    return newNode;
  }
  
  // head a value inserting kora
  void inserting_At_head(int value)
  {
    size++;
    Node* a = Creat_Node(value);
    if(head == NULL)
    {
      head = a;
      return;
    }
    a->next = head;
    head = a;
  }
  
  // sob node Traversing kory elemint gula print kora
  void Traversing()
  {
    Node* a = head;
    while (a!=NULL)
    {

      cout <<a->data <<" ";
      a= a->next;
    }
  }
  
  // Node ar jey kono index a value inserting kora
  // Time complexity = O(n)
  void inserting_at_any_index(int index, int value)
  {
    if(index < 0 || index > size)
    {
      return;
    }
    
    if(index == 0)
    {
      inserting_At_head(value); // 
      return;
    }
    Node* a = head;
    int cur_index = 0;
    while (cur_index != index-1)
    {
      a = a->next;
      cur_index++;
    }
    size++;
    Node* NewNode = Creat_Node(value);
    NewNode->next = a->next;
    a->next = NewNode;
  }

  void Delete_At_Head()
  {
    if(head == NULL)
    return ;

    size--;
    Node *a = head;
    head = a->next;

    delete a;
  }





};

int main()
{
  Linked_list l;
  l.inserting_At_head(10);
  l.inserting_At_head(20);
  l.inserting_At_head(40);
  l.Traversing();
  l.inserting_at_any_index(1,30);
  l.inserting_at_any_index(2,350);
  cout <<"\n";
  l.Traversing();

   return 0;
}