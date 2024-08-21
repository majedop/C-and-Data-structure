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
    int last_non_leap = (n/2)-1;
    for (int i = last_non_leap; i>=0; i--)
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
    if(node.empty())
    {
      cout << "Heap is empyt" << "\n";
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
};

vector<int> Heap_sort(vector<int> &a)
  {

    Max_heap h;
    h.Heap_from_array(a);
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
      ans.push_back(h.ExtractMax());
    }
    reverse(ans.begin(), ans.end());
    return ans;
  }

int main()
{
  
 /*  Max_heap h;
  vector<int> a = {1,2,3,4, 10, 9, 8,7};
  h.Heap_from_array(a);
  h.Print_heap();
  h.ExtractMax();
  h.Print_heap();
 */
  vector<int> a = {1, 2, 3, 4, 10, 9, 5, 7};
  vector<int> sorted_a = Heap_sort(a);
  for (int i = 0; i < sorted_a.size(); i++)
  {
    cout << sorted_a[i] << " ";
  }
  

  return 0;
}
