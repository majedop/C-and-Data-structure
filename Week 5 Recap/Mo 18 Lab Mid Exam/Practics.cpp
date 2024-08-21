#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  double data;
  Node *next;
};

class Singly_linked_list
{
public:
  Node *head;
  int sz;
  Singly_linked_list()
  {
    head = NULL;
    sz = 0;
  }
  // New Node return
  Node *Creat_node(double value)
  {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    return newNode;
  }

  // Insert at head
  void Inset_at_head(double value)
  {
    sz++;
    Node *new_node = Creat_node(value);
    if (head == NULL)
    {
      head = new_node;
      return;
    }
    new_node->next = head;
    head = new_node;
  }

  // last element return
  double getLast()
  {
    if (head == NULL)
      return -1;
    Node *a = head;
    while (a != NULL)
    {
      if (a->next == NULL)
        return a->data;
      a = a->next;
    }
  }

  // get Average
  double getAverage()
  {
    int sum = 0, cnt = 0;
    double avg = 0.0;
    Node *a = head;
    while (a != NULL)
    {
      sum += a->data;
      a = a->next;
      cnt++;
    }
    if(cnt == 0)
    return 0.0;
    avg = (double)sum/ cnt;
    return avg;
  }

  void getsize()
  {
    cout << sz << "\n";
  }
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
  Singly_linked_list sl;
  sl.Inset_at_head(5);
  sl.Inset_at_head(4);
  sl.Inset_at_head(6);
  sl.Inset_at_head(2);
  sl.Inset_at_head(3);

  sl.print_all();
  cout << sl.getLast() << "\n";
  double ans  = sl.getAverage();
  cout << ans <<"\n"; 
  return 0;
}