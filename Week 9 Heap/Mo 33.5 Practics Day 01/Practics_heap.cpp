#include <bits/stdc++.h>
using namespace std;

class Max_heap
{
public:
  vector<int> nodes;
  Max_heap()
  {
  }
  // Up_up_larg
  void up_heapify(int idx)
  {
    while (idx > 0 && nodes[idx] > nodes[(idx - 1) / 2])
    {
      swap(nodes[idx], nodes[(idx - 1) / 2]);
      idx = (idx - 1) / 2;
    }
  }
  // Insert heap new value
  void Insert(int x)
  {
    nodes.push_back(x);
    up_heapify(nodes.size() - 1);
  }

  void down_heapify(int idx)
  {
    while (1)
    {
      int larg = idx;
      int l = 2 * idx + 1;
      int r = 2 * idx + 2;
      if (l < nodes.size() && nodes[larg] < nodes[l])
        larg = l;

      if (r < nodes.size() && nodes[larg] < nodes[r])
        larg = r;
      if(larg == idx)
      break;

      swap(nodes[idx], nodes[larg]);
      idx = larg;
    }
  }
  // delete
  void Delete(int idx)
  {
    if (idx >= nodes.size())
      return;
    swap(nodes[idx], nodes[nodes.size() - 1]);
    nodes.pop_back();
    down_heapify(idx);
  }

  // heap all vlaue print
  void Print_heap()
  {
    for (int i = 0; i < nodes.size(); i++)
    {
      cout << nodes[i] << " ";
    }
    cout << "\n";
  }
  
  // O(n)
  void array_to_heap(vector<int> &a)
  {
    nodes = a;
    int n = nodes.size();
    int last_non_leap = (n/2)-1;
    for (int i = last_non_leap; i >= 0; i--)
    {
      down_heapify(i);
    }
    
  }
  int getMax()
  {
    if(nodes.empty())
    {
      cout << "Heap is emtpy" << "\n";
      return -1;
    }
    return nodes[0];
  }
};

int main()
{
  vector<int> a = {1, 2, 3, 4, 10, 9, 8, 7};
  Max_heap h;
  h.array_to_heap(a);
  h.Print_heap();

  

  return 0;
}