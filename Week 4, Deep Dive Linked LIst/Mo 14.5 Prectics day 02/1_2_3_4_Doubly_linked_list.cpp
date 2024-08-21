#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prv;
};

class doubly_linked_list
{
public:
  Node *head;
  int sz = 0;

  doubly_linked_list()
  {
    head = NULL;
    sz = 0;
  }

  // New Node creating
  Node *Creat_node(int value)
  {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    newNode->prv = NULL;

    return newNode;
  }

  // Insert at head
  void insert_at_head(int value)
  {
    sz++;
    Node *new_node = Creat_node(value);
    if (head == NULL)
    {
      head = new_node;
      return;
    }

    Node *a = head;
    new_node->next = a;
    a->prv = new_node;
    head = new_node;
  }

  // insert at end
  void insert_at_back(int value)
  {
    sz++;
    if (head == NULL)
    {
      insert_at_head(value);
      return;
    }

    Node *a = head;
    while (a->next != NULL)
    {
      a = a->next;
    }

    Node *neww = Creat_node(value);
    a->next = neww;
    neww->prv = a;
  }

  // list ar front a new data add
  void add_front(int value)
  {
    insert_at_head(value);
  }

  // Searching i-th element
  void Search_use_index(int index)
  {
    if (index > sz)
    {
      cout << index << " index does't exist"
           << "\n";
      return;
    }
    Node *a = head;
    int cur_index = 0;
    while (cur_index != index)
    {
      a = a->next;
      cur_index++;
    }
    cout << a->data << "\n";
  }

  void Search_use_value(int value)
  {
    Node *a = head;
    while (a != NULL)
    {
      if (a->data == value)
      {
        cout << "True"
             << "\n";
        return;
      }
      a = a->next;
    }
    cout << "False"
         << "\n";
  }

  // delete element beack side
  void delete_at_back()
  {
    if (head == NULL)
    {
      cout << "does note value in the node "
           << "\n";
      return;
    }
    sz--;
    Node *a = head;
    while (a->next != NULL)
    {
      a = a->next;
    }
    Node *b = a->prv;
    b->next = NULL;
    delete a;
  }

  // get size
  void getSize()
  {
    cout << sz << "\n";
  }

  // all value print
  void Print_all()
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
  doubly_linked_list dl;
  dl.insert_at_head(5);
  dl.insert_at_head(4);
  dl.insert_at_head(3);
  dl.insert_at_head(2);
  dl.insert_at_head(1);

  /* dl.Print_all();
  dl.add_front(0);
  dl.Print_all();

  dl.insert_at_back(0); */
  /* dl.Print_all();
  dl.delete_at_back(); */

  dl.Print_all();
  dl.Search_use_index(6);
  dl.Search_use_value(3);

  return 0;
}