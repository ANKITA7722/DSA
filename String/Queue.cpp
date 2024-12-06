// Queue  fifo ko follow karta hai que  ka use  graf me hota hai
//
#include<iostream>
using namespace std;
#include<stack>//it follows lifo(last in first out)
#include<queue>
int main()
{
    queue<int>q;
    q.push(101);
    q.push(102);
    q.push(103);
    q.push(104);
    while(!q.empty())
    {
        cout<<q.front()<<"\t";
        q.pop();
    }

}

// ==================================================================
#include<iostream>
using namespace std;
#include<stack>//it follows lifo(last in first out)
#include<queue>
int main()
{
    deque<int>q;
    q.push_front(101);
    q.push_back(102);
    q.push_back(103);
    q.push_front(104);
    while(!q.empty())
    {
        cout<<q.back()<<"\t";//103     102     101     104
        q.pop_back();
    }

}
