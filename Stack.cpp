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


//==========================================================================
//date:-05/12/2024 day:guruwar
#include<iostream>
#include<stack>
using namespace std;
bool valid(string &s,int len)
{
    bool r=true;
    stack<char>stk;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='['  )
        {
            stk.push(s[i]);
        }
        else if(s[i]=='}')
        {
            if(!stk.empty() && stk.top() == '{')
            {
                stk.pop();
            }
            else
            {
                r=false;
                break;
            }
        }
        else if(s[i]==')')
        {
            if(!stk.empty() && stk.top()=='(')
            {
                stk.pop();
            }
            else
            {
                r=false;
                break;
            }
        }
        else
        {
            if(!stk.empty() && stk.top()=='[')
            {
                stk.pop();
            }
            else
            {
                r=false;
                break;
            }
        }
    }

if(!stk.empty())
{
    return false;
}
else
{
    return true;
}
}
int main()
{

    string s="[{}]";
    bool i=valid(s,s.length());
    if(i)
    {
        cout<<"valid";
    }
    else
    {
        cout<<"invalid";
    }
}
output:- valid