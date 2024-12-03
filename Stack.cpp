// Stack:-stack is followed lifo
//top(),empty(),pop(),push()
//massage:underflow,overflow
#include <iostream>
using namespace std;
#include <stack>
int main() {
    stack<int>s;
    s.push(21);
    s.push(4);
    s.push(5);
    s.push(4);
    if(s.empty())
    {
        cout<<"\n it is empty\n";
    }else
    {
        cout<<"\n it is not empty\n";
    }
    while(!s.empty())
    {
        cout<<s.top()<<"\t";
        s.pop();
    }
     if(s.empty())
    {
        cout<<"\n it is empty\n";
    }else
    {
        cout<<"\n it is not empty\n";
    }
}
output:-it is not empty
4	5	4	21	
it is empty
