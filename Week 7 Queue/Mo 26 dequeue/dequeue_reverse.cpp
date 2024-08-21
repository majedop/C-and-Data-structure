#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prv;

  Node(int val)
  {
    data = val;
    next = NULL;
    prv = NULL;
  }
};

class Dequeue
{
public:
  Node *head;
  Node *tail;
  int sz;
  int rev;
  Dequeue()
  {
    head = NULL;
    tail = NULL;
    sz = 0;
    rev = 0;
  }

  void Insert_at_tail(int val)
  {
    sz++;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }

    tail->next = newNode;
    newNode->prv = tail;
    tail = newNode;
  }
  void Inser_at_head(int val)
  {
    sz++;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }

    head->prv = newNode;
    newNode->next = head;
    head = newNode;
  }
  void Push_back(int val)
  {
    if (rev == 0)
      Insert_at_tail(val);
    else
      Inser_at_head(val);
  }

  void Push_front(int val)
  {
    if (rev == 0)
      Inser_at_head(val);
    else
      Insert_at_tail(val);
  }

  void delete_last()
  {
    if (sz == 0)
    {
      cout << "Queue is empty";
      return;
    }
    if (sz == 1)
    {
      delete head;
      head = NULL;
      tail = NULL;
      sz--;
      return;
    }
    Node *del_node = tail;
    tail = tail->prv;
    delete[] del_node;
    tail->next = NULL;
    sz--;
  }

  void delete_frist()
  {
    if (sz == 0)
    {
      cout << "Queue is empty";
      return;
    }
    if (sz == 1)
    {
      delete head;
      head = NULL;
      tail = NULL;
      sz--;
      return;
    }
    Node *del_node = head;
    head = head->next;
    delete[] del_node;
    head->prv = NULL;
    sz--;
  }

  void Pop_back()
  {
    if(rev == 0)
    delete_last();
    else
    delete_frist();
  }

  void Pop_front()
  {
    if(rev == 0)
    delete_frist();
    else
    delete_last();
  }

  int Front()
  {
    if (sz == 0)
    {
      cout << "Queue is empty";
      return -1;
    }
    if(rev == 0)
    return head->data;
    else
    return tail->data;
  }

  int Back()
  {
    if (sz == 0)
    {
      cout << "Queue is empty";
      return -1;
    }
    if(rev == 0)
    return tail->data;
    else
    return head->data;
  }

  int empty()
  {
    if (sz == 0)
      return 1;
    return 0;
  }

  int Size()
  {
    return sz;
  }

  void reverse()
  {
    if (rev == 0)
      rev = 1;
    else
      rev = 0;
  }
};

int main()
{
  
  Dequeue q;
  q.Push_back(5);
  q.Push_back(10);
  q.Push_back(15);
  q.Push_front(20);
  q.reverse();

  cout << "Back : "<< q.Back() <<" " <<"Front : " << q.Front() <<"\n";
  q.Pop_front();
  cout << "Back : "<< q.Back() <<" " <<"Front : " << q.Front() <<"\n";
  q.Pop_back();
  cout << "Back : "<< q.Back() <<" " <<"Front : " << q.Front() <<"\n";

  return 0;
}