#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    int i;
    if(n==1)
        return;

   for(i=0;i<n;i++)
   {
      if(arr[i]>arr[i+1])
      {
          int temp = arr[i];
          arr[i] = arr[i+1];
          arr[i+1] = temp;
      }

   }
   bubble_sort(arr,n-1);
 }
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
     bubble_sort(arr,n);
    cout<<"Sorted array: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
