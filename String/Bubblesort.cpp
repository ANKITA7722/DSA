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

///==============================================================================
#include<iostream>
using namespace std;
void bubble(int arr[],int s)
{
    int count=0;

    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s-i-1;j++)
        {
            int temp;
            if(arr[j]>arr[j+1])
            {
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            }
            count++;
        }

    }

    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
     cout<<"\n c="<<count;

}
int main ()
{
    int arr[]={8 ,7, 5, 3, 2};
    int s= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n after shorting \n";
bubble(arr,s);
}

output:-8       7       5       3       2
 after shorting
2       3       5       7       8
 c=10