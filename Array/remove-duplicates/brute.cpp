#include<bits/stdc++.h>

using namespace std;
int removeDup(int arr[],int n)
{
    set<int>set;
    for(int i=0;i<n;i++)
    {
        set.insert(arr[i]);
    }
    int k=set.size();
    int j=0;
    for(int x:set)
    {
        arr[j++]=x;
    }
    return k;
}
int main()
{
    int arr[]={1,1,2,2,3,3,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);//claculate total no of elements in array
    int k=removeDup(arr,n);
    cout<<"Array after removing duplictes elements"<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
}