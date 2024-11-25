#include<iostream>
using namespace std;
#include <array>
int main ()
{
    array<int,5>arr {1,2,3,4,5};
    cout<<arr.size()<<"\n";
    for(int i=0; i<arr.size();i++)
    {
        cout<<arr.at(i)<<"\t";
    }
}