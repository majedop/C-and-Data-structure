#include <bits/stdc++.h>
using namespace std;

const int max_size = 7;
class Queue
{
    public:
    int arr[max_size];
    int l, r;
    int sz;
    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }

    void enqueue(int value)
    {
        if(sz == max_size)
        {
            cout << "Queue is full!";
            return;
        }
        r++;
        if(r == max_size)
        r = 0;

        arr[r] = value;
        sz++;
    }

    void dequeue()
    {
        if(sz == 0)
        {
            cout << "Queue is empty";
            return;
        }
        l++;
        if(l == max_size)
        l = 0;

        sz--;
    }

    int front()
    {
        if(sz == 0)
        {
            cout << "Queue is empty";
            return -1;
        }
        return arr[l];
    }
    int getSize()
    {
        return sz;
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << q.front() <<"\n";
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << q.front() <<"\n";

    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.enqueue(90);
    cout << q.front() <<" ";
    q.dequeue();
    cout << q.front() <<" ";
    q.dequeue();
    cout << q.front() <<" ";
    q.dequeue();
    cout << q.front() <<" ";
    q.dequeue();
    cout << q.front() <<" ";
    q.dequeue();
    cout << q.front() <<" ";
    q.dequeue();
    cout << q.front() <<" ";
    q.dequeue();
    
    

    
    

}