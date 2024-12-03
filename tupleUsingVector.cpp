// tuple program using vector
#include <iostream>
using namespace std;
#include<tuple>
#include<vector>
int main() {
  vector<tuple<int,string,int>>v1;
  int n,rno,age;
  string name;
  cout<<"how many records\n";
  cin>>n;
  for(int i=0;i<=n;i++)
  {
      cout<<"\n enter rollno ";
      cin>>rno;
      cout<<"\n enter name ";
      cin>>name;
      cout<<"\n enter age ";
      cin>>age;
      v1.push_back(make_tuple(rno,name,age));
      
  }
  for(int i=0;i<v1.size();i++)
  {
      cout<<get<0>(v1[i])<<"\t";
       cout<<get<1>(v1[i])<<"\t";
        cout<<get<2>(v1[i])<<"\t";
  }
    
}





// tuple program using vector
#include <iostream>
using namespace std;
#include<tuple>
#include<vector>
#incude<forward_list>
int main() {
  vector<tuple<int,string,int>>v1;
  int n,rno,age;
  string name;
  cout<<"how many records\n";
  cin>>n;
  for(int i=0;i<=n;i++)
  {
      cout<<"\n enter rollno ";
      cin>>rno;
      cout<<"\n enter name ";
      cin>>name;
      cout<<"\n enter age ";
      cin>>age;
      v1.push_back(make_tuple(rno,name,age));
      
  }
  for(int i=0;i<v1.size();i++)
  {
      cout<<get<0>(v1[i])<<"\t";
       cout<<get<1>(v1[i])<<"\t";
        cout<<get<2>(v1[i])<<"\t";
  }
    
}