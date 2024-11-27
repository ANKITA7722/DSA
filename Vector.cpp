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

//program 4nd
#include <iostream>
using namespace std;
#include<vector>
vector<int>test(vector<int>v)
{
    for(auto p:v)
    {
        cout<<p+1<<"\t";
    }
    return v;
}
int main() {
    vector<int>v{1,2,3,4,5};
    test(v);
    cout<<"\n";
    for(auto k:v)
    {
        cout<<k<<"\t";
    }
}
//output:-
2	3	4	5	6	
1	2	3	4	5	


//program 5nd
// 
#include <iostream>
using namespace std;
#include<vector>
vector<int>test(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
       v[i]=(v[i]+1);
       cout<<v[i]<<"\t";
       
    }
    return v;
}
int main() 
{
    vector<int>v{1,2,3,4,5};
    for(auto k:v)
    {
        cout<<k<<"\t";
    }
    cout<<"\n";
    test(v);
    cout<<"\nafter calling funcion\n";
    for(auto k:v)
    {
        cout<<k<<"\t";
    }
}
//output:-
1	2	3	4	5	
2	3	4	5	6	
after calling funcion
2	3	4	5	6
//or

#include <iostream>
using namespace std;
#include<vector>
vector<int>test(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
       v[i]++;
       
    }
    return v;
}
int main() 
{
    vector<int>v{1,2,3,4,5};
    for(auto k:v)
    {
        cout<<k<<"\t";
    }
    cout<<"\n";
    test(v);
    cout<<"\nafter calling funcion\n";
    for(auto k:v)
    {
        cout<<k<<"\t";
    }
}

//quetion :- Write a program to return if the value of an array are consecutive else return false
//example1  input:-A[0,1,4,2,5]
//output:-false
//example2:input A[0,1,5,4,3,2]
//output:-true 




// que 2:- write a program  to change the first character of each string of a sentence into upercase
// ex1:- input A ="how much quantity";
//         input A="how much quantity";

#include <iostream>
using namespace std;
#include <string>
#include <cctype>


string capitalizeFirstChar(const string &s) {
    string ans = s;
    bool capitalize = true;

    for (size_t i = 0; i < ans.size(); ++i) 
    {
        if (capitalize && isalpha(ans[i])) 
        {
            ans[i] = toupper(ans[i]);
            capitalize = false;
        }
        else if (ans[i] == ' ') 
        {
            capitalize = true;
        }
    }

    return ans;
}

int main() {
    string A = "how much quantity";

    cout << "Input: " << A << endl;
    cout << "Output: " << capitalizeFirstChar(A) << endl;

    return 0;
}





//que3:-  write a program to return true if secound string found in a first string?
//input s1="HEMANT" s2="HE"
//output=true
// ex2:-input s1="Honey" s2="nepal"
// output:=false



















