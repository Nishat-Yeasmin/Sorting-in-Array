#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(i=0;i<n;i++)
     {
         int min = i;
         for(int j=i+1;j<n;j++)
         {
             if(arr[min]>arr[j])
             {
                 min = j;
             }
         }
         if(arr[min]!=i)
         {
             int temp = arr[i];
             arr[i] = arr[min];
             arr[min] = temp;
         }
     }
     cout<<"Sorted array: ";
     for(i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;

}
