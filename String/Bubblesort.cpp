//demo code in bubble sort
#include<iostream>
using namespace std;
int sum(int arr[],int t)
{
    int pluse=0;
    for(int i=0;i<t;i++)
    {
        pluse += arr[i];
    }
    return pluse;

}
int main ()
{
    int arr[]={5, 2, 4, 6, 1, 3};
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<sum(arr,s)//array ki lenth ke liye s define kiya hai
}

