// most important for of queue
// has heap property
// orders the data accordinf to the criteria just like the sort function in algorithm
// implemented as a tree data structure

// push O(log N)
// pop  O(log N)
// top  O(1)
// empty


#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int> pqx; // max heap
    priority_queue<int,vector<int>,greater<int>> pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int no;
        cin>>no;
        pq.push(no);
    }

    while (!pq.empty())
    {
        cout<<pq.top();
        pq.pop();
    }

    

}