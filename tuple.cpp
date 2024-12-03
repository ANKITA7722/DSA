// tuple in vector we can insert  mulltipe data insert like string and intiger 
#include <iostream>
using namespace std;
#include<tuple>
int main() {
   tuple<int,string,int>t{1,"ankita",22};
   cout<<"roll no="<<get<0>(t)<<"\n";
   cout<<"name="<<get<1>(t)<<"\n";
   cout<<"Age="<<get<2>(t)<<"\n";

    return 0;
}