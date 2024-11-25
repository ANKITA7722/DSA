//Sequance Container 
    //array

    // Online C compiler to run C program onlin
#include<iostream>
using namespace std;
#include<array>
int main ()
{
    array<int,5>arr;
    cout<<"entter 5 values\n";
    for(int i=0; i<arr.size();i++)
    {
        cin>>arr[i];
    }
    cout<<"output is\n";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"value at 0 indexing="<<arr.front()<<"\n";
    cout<<"value at n-1 indexing="<<arr.back()<<"\n";
    array<int,5>d{10,50,80,37,40};
    cout<<"output of second array is\n";
    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<"\t";
    }
    arr.swap(d);
    cout<<"\n after swapping output of second array is\n";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<"\t";
    }
    d.fill(-100);
    cout<<"\n";
    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<"\t";
    }
}
    
    
    
    
    
    
    
    

