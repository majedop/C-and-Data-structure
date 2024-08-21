#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

class Max_heap
{
public:
  vector<int> node;
  Max_heap()
  {
  }
  // Up heapify this find parents lage number
  void Up_heapify(int idx)
  {
    while (node[idx] > node[(idx - 1) / 2])
    {
      swap(node[idx], node[(idx - 1) / 2]);
      idx = (idx - 1) / 2;
    }
  }

  // Down heapify
  void down_heapify(int idx)
  {
    while (1)
    {
      int l = 2 * idx + 1;
      int r = 2 * idx + 2;
      int larg = idx;

      if (l < node.size() && node[larg] < node[l])
        larg = l;
      if (r < node.size() && node[larg] < node[r])
        larg = r;
      if (larg == idx)
        break;
      swap(node[idx], node[larg]);
      idx = larg;
    }
  }
  // Insert new value in max heap O(logn)
  void Insert(int value)
  {
    node.push_back(value);
    Up_heapify(node.size() - 1);
  }

  // delete  O(logn)
  void Delete(int idx)
  {
    if (node.empty())
    {
      cout << "Heap is empty";
      return;
    }
    swap(node[idx], node[node.size() - 1]);
    node.pop_back();
    down_heapify(idx);
  }
  // array to heap convert O(n);
  void Heap_from_array(vector<int> &a)
  {
    node = a;
    int n = node.size();
    int last_non_leap = (n / 2) - 1;
    for (int i = last_non_leap; i >= 0; i--)
    {
      down_heapify(i);
    }
  }
  // Print all value
  void Print_heap()
  {
    for (int i = 0; i < node.size(); i++)
    {
      cout << node[i] << " ";
    }
    cout << "\n";
  }

  int getMax()
  {
    if (node.empty())
    {
      cout << "Heap is empyt"
           << "\n";
      return -1;
    }
    return node[0];
  }
  int ExtractMax()
  {
    int r = node[0];
    Delete(0);
    return r;
  }
  int get_size()
  {
    return node.size();
  }
};

class Priotity_queue
{
public:
  Max_heap h;
  Priotity_queue()
  {
  }
  void Push(int x)
  {
    h.Insert(x);
  }
  void Pop()
  {
    h.Delete(0);
  }
  int Top()
  {
    h.getMax();
  }
  int size()
  {
    return h.get_size();
  }
};

int main()
{
  Priotity_queue pq;
  pq.Push(5);
  pq.Push(7);
  pq.Push(10);
  pq.Push(1);
  pq.Push(2);
  while (pq.size() != 0)
  {
   cout << pq.Top() << " ";
   pq.Pop();
  }
  
  return 0;
}