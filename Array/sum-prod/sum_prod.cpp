#include<iostream>
using namespace std;

int getSum(int arr[],int n)
{
    int sum=0;
    for(int i;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{   
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=getSum(arr,n);
}