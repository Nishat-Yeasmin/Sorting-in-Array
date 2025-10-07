#include<iostream>
using namespace std;
int main()
{
    int n,i,j,max;
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
        max = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[max]<arr[j])
            {
                max = j;
            }
        }
        if(max!=i)
        {
            int temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
    }
    cout<<"Sorted array: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
