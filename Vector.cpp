//Sequance Container
//vector
//program 1st
#include<iostream>
using namespace std;
#include<vector>
int main ()
{
    vector<int>v{10,20,7};//it is static input 
    cout<<"total lenght of vector"<<v.size()<<"\n";
    cout<<"max value of vector:-"<<v.max_size()<<"\n";
    for(auto a:v)//it is a range function auto  can get data 1 by 1 and display it is not increament and decreament data
    {
        cout<<a<<"\n";
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\n";
    }  
}

//program 2nd
#include<iostream>
using namespace std;
#include<vector>
int main ()
{
   vector<int>v;
   v.push_push(10);
   cout<<"size="<<v.size();
   cout<<"\n capacity="<<v.capacity()<<"\n";
   for(auto p:v)
   {
       cout<<p;

   }
}


//program 3nd

#include<iostream>
using namespace std;
#include<vector>
int main ()
{
    vector<int>v;
    int s,t;
    cout<<"enter How many records\n";
    cin>>s;
    cout<<"enter "<<s<<"elements\n";
    for(int i=0;i<s;i++)
    {
        cin>>t;
        v.push_back(t);
    }
    cout<<"size="<<v.size()<<"\n";
     cout<<"capacity="<<v.capacity()<<"\n";
     for(auto a:v)
     {
         cout<<a<<"\t";
     } 
}

//output :-
// enter How many records
// 6
// enter 6elements
// 12
// 34
// 56
// 54
// 45
// 67
// size=6
// capacity=8
// 12	34	56	54	45	67	





















