#include <bits/stdc++.h>
using namespace std;

class Min_Heap
{
public:
  vector<int> nodes;
  Min_Heap()
  {
  }
  void Up_heapify(int idx)
  {
    while (idx > 0 && nodes[idx] < nodes[(idx - 1) / 2])
    {
      swap(nodes[idx], nodes[(idx - 1) / 2]);
      idx = (idx - 1) / 2;
    }
  }

  void Insert(int value)
  {
    nodes.push_back(value);
    Up_heapify(nodes.size() - 1);
  }

  void down_heapify(int idx)
  {
    while (1)
    {
      int l = 2 * idx + 1;
      int r = 2 * idx + 2;
      int larg = idx;
      if (l < nodes.size() && nodes[larg] > nodes[l])
        larg = l;
      if (r < nodes.size() && nodes[larg] > nodes[r])
        larg = r;
      if (larg == idx)
        break;

      swap(nodes[idx], nodes[larg]);
      idx = larg;
    }
  }

  void Delete(int idx)
  {
    swap(nodes[idx], nodes[nodes.size() - 1]);
    nodes.pop_back();
    down_heapify(idx);
  }

  void print_heap()
  {
    for (int i = 0; i < nodes.size(); i++)
    {
      cout << nodes[i] << " ";
    }
    cout << "\n";
  }
  int Extrect_min()
  {
    if (nodes.empty())
    {
      cout << "Heap is empty"
           << "\n";
      return -1;
    }
    int r = nodes[0];
    Delete(0);
    return r;
  }
  int getMin()
  {
    if (nodes.empty())
    {
      cout << "Min heap is empty"
           << "\n";
      return -1;
    }
    return nodes[0];
  }

  void array_to_heap(vector<int> &a)
  {
    nodes = a;
    int n = nodes.size();
    int last_non_leap = (n / 2) - 1;
    for (int i = last_non_leap; i >= 0; i--)
    {
      down_heapify(i);
    }
  }
  int get_size()
  {
    return nodes.size();
  }
};

class Priyority_queue
{
  public:
  Min_Heap mh;
  Priyority_queue()
  {

  }
  void Push(int value)
  {
    mh.Insert(value);
  }
  void Pop()
  {
      mh.Delete(0);
  }
  int Top()
  {
    return mh.getMin();
  }
  int Size()
  {
    return mh.get_size();
  }
};

int main()
{
  Priyority_queue pq;
  pq.Push(1);
  pq.Push(4);
  pq.Push(3);
  pq.Push(5);
  pq.Push(10);
  while (pq.Size())
  {
    cout << pq.Top() << " ";
    pq.Pop();
  }
  

  return 0;
}