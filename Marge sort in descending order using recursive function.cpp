#include<iostream>
using namespace std;
void marge(int arr[],int l,int mid,int h)
{
    int n1=mid-l+1;
    int n2 = h-mid;

    int a[n1],b[n2];

    for(int i=0; i<n1; i++)
        a[i]=arr[l+i];

    for(int i=0; i<n2; i++)
        b[i]=arr[mid+1+i];

    int i=0,j=0,k=l;

    while(i<n1 && j<n2)
    {
        if(a[i]>=b[j])
            arr[k++]=a[i++];
        else
            arr[k++]=b[j++];
    }
    while(i<n1)
        arr[k++]=a[i++];

    while(j<n2)
        arr[k++]=b[j++];
}
void marge_sort(int arr[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        marge_sort(arr,l,mid);
        marge_sort(arr,mid+1,h);
        marge(arr,l,mid,h);
    }
}
int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    marge_sort(arr,0,n-1);

    cout<<endl<<"Sorted array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

