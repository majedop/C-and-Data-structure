#include <bits/stdc++.h>
using namespace std;

class Heap
{
public:
  vector<int> node;
  Heap()
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

  // Up heapify
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
  // Insert new value in max heap
  void Insert(int value)
  {
    node.push_back(value);
    Up_heapify(node.size() - 1);
  }

  // delete
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

  void Print_heap()
  {
    for (int i = 0; i < node.size(); i++)
    {
      cout << node[i] << " ";
    }
    cout << "\n";
  }
};
int main()
{
  Heap h;
  h.Insert(10);
  h.Insert(9);
  h.Insert(8);
  h.Insert(6);
  h.Insert(5);
  h.Insert(3);
  h.Insert(4);
  h.Print_heap();
  h.Insert(20);
  h.Print_heap();
  h.Delete(0);
  h.Print_heap();
}
