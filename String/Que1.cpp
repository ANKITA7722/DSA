#include <iostream>
using namespace std;
#include <string>
#include <algorithm> 
int main() {
   string str;
   cout<<"Enter any string\n";
   getline(cin,str);
   int i=0;
   int j=str.length()-1;
   while(i<j)
   {
       swap(str[i],str[j]);
       i++;
       j--;
   }
    cout<<str;
}
//output:-Enter any string
Ankita Bobde
edboB atiknA
