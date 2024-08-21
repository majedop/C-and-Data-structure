#include <bits/stdc++.h>
using namespace std;
class MaxHeap
{
public:
  vector<int> v;
  MaxHeap()
  {
  }

  // Up_heapify
  void Up_heapify(int idx)
  {
    while (idx >= 0 && v[idx] > v[(idx - 1) / 2])
    {
      swap(v[idx], v[(idx - 1) / 2]);
      idx = (idx - 1) / 2;
    }
  }

  // Insert new Value
  void Insert(int value)
  {
    v.push_back(value);
    Up_heapify(v.size() - 1);
  }

  // down heapify
  void Down_heapify(int idx)
  {
    while (1)
    {
      int larg = idx;
      int l = 2 * idx + 1;
      int r = 2 * idx + 2;
      if (l < v.size() && v[larg] < v[l])
      {
        larg = l;
      }
      if (r < v.size() && v[larg] < v[r])
      {
        larg = r;
      }
      if (larg == idx)
      {
        break;
      }
      swap(v[idx], v[larg]);
      idx = larg;
    }
  }

  // Delete value in the max heap
  void Delete(int idx)
  {
    if (v.empty())
      return;
    swap(v[idx], v[(v.size() - 1)]);
    v.pop_back();
    Down_heapify(idx);
  }

  int Extrac_Max()
  {
    if (v.empty())
    {
      cout << "Heap is empty"
           << "\n";
      return -1;
    }
    int r = v[0];
    Delete(0);
    return r;
  }
  int getMax()
  {
    if (v.empty())
    {
      cout << "Heap is empty"
           << "\n";
      return -1;
    }
    return v[0];
  }
  // Print all value
  void Print()
  {
    for (int i = 0; i < v.size(); i++)
    {
      cout << v[i] << " ";
    }
    cout << "\n";
  }

  // sort
  int Min_value()
  {
    vector<int> ans;
    int sz = v.size();
    for (int i = 0; i < sz; i++)
    {
      ans.push_back(Extrac_Max());
    }
    reverse(ans.begin(), ans.end());
    return v[0];
  }
};

class MinHeap
{
public:
  MaxHeap mx;
  vector<int> node;
  void insert(int x)
  {
    mx.Insert(x);
  }
  void Delete(int idx)
  {
    mx.Delete(idx);
  }
  int getMin()
  {
    return mx.Min_value();
  }
};

int main()
{
  MinHeap mh;
  mh.insert(5);
  mh.insert(10);
  mh.insert(2);
  mh.insert(9);
  mh.insert(6);
  mh.insert(4);
  mh.insert(8);
  mh.insert(12);
  cout << mh.getMin() << "\n";

  return 0;
}