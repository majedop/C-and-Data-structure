#include <bits/stdc++.h>
using namespace std;

class Heap
{
public:
  vector<int> v;

  Heap() 
  {
  }
  void up_heapify(int idx)
  {
    while (idx > 0 && v[idx] > v[(idx - 1) / 2])
    {
      swap(v[idx], v[(idx - 1) / 2]);
      idx = (idx - 1) / 2;
    }
  }

  void down_heapify(int idx)
  {
    while (1)
    {
      int l = 2 * idx + 1;
      int r = 2 * idx + 2;
      int larg = idx;
      if (l < v.size() && v[larg] < v[l])
        larg = l;
      if (r < v.size() && v[larg] < v[r])
        larg = r;
      if (larg == idx)
        break;
      swap(v[idx], v[larg]);
      idx = larg;
    }
  }
  void Insert(int x)
  {
    v.push_back(x);
    up_heapify(v.size() - 1);
  }

  void Delete(int idx)
  {
    if (idx >= v.size())
      return;

    swap(v[idx], v[v.size() - 1]);
    v.pop_back();
    down_heapify(idx);
  }

  int getMax()
  {
    if(v.empty())
    {
      cout << "Heap is empty";
      return -1;
    }
    return v[0];
  }

  int ExtractMax()
  {
    if(v.empty())
    {
      cout << "Heap is empty";
      return -1;
    }

    int r = v[0];
    Delete(0);
    return r;
  }

  void Print_heap()
  {
    for (int i = 0; i < v.size(); i++)
    {
      cout << v[i] << " ";
    }
    cout << "\n";
  }
};
int main()
{
  Heap hp;
  hp.Insert(10);
  hp.Insert(9);
  hp.Insert(8);
  hp.Insert(6);
  hp.Insert(7);
  hp.Insert(5);
  hp.Insert(3);
  hp.Print_heap();
  hp.Delete(0);
  hp.Print_heap();
  cout << hp.ExtractMax() << "\n";
  hp.Print_heap();

  return 0;
}