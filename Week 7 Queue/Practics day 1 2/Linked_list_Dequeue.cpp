#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  Node* prv;

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
  Node* head;
  Node* tail;
  int sz;
  Dequeue()
  {
    head = NULL;
    tail = NULL;
    sz = 0;
  }
};
int main()
{


  return 0;
}