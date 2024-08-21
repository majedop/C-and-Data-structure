#include <bits/stdc++.h>
using namespace std;

class Max_heap
{
public:
  vector<int> nodes;
  Max_heap()
  {
  }

  // down to up largest number swap
  void Up_heapify(int idx)
  {
    while (idx > 0 && nodes[idx] > nodes[(idx - 1) / 2])
    {
      swap(nodes[idx], nodes[(idx - 1) / 2]);
      idx = (idx - 1) / 2;
    }
  }

  // insert new node child
  void Insert(int value)
  {
    nodes.push_back(value);
    Up_heapify(nodes.size() - 1);
  }

  // up to down heapify
  void down_heapify(int idx)
  {
    while (1)
    {
      int l = 2 * idx + 1;
      int r = 2 * idx + 2;
      int larg = idx;
      if (l < nodes.size() && nodes[larg] < nodes[l])
      {
        larg = l;
      }
      if (r < nodes.size() && nodes[larg] < nodes[r])
      {
        larg = r;
      }
      if (larg == idx)
      {
        break;
      }
      swap(nodes[idx], nodes[larg]);
      idx = larg;
    }
  }

  // delete node
  void Delete(int idx)
  {
    if (idx >= nodes.size())
      return;
    swap(nodes[idx], nodes[nodes.size() - 1]);
    nodes.pop_back();
    down_heapify(idx);
  }
  // Print all value
  void Print_heap()
  {
    for (int i = 0; i < nodes.size(); i++)
    {
      cout << nodes[i] << " ";
    }
    cout << "\n";
  }

  int get_Extract_max()
  {
    if (nodes.empty())
    {
      cout << "heap is empty"
           << "\n";
      return -1;
    }
    int r = nodes[0];
    Delete(0);
    return r;
  }
  int getMax()
  {
    if (nodes.empty())
    {
      cout << "heap is empty"
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
};
int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  Max_heap mh;
  mh.array_to_heap(a);
  for (int i = 0; i < k; i++)
  {
    cout << mh.get_Extract_max() << " ";
  }

  return 0;
}