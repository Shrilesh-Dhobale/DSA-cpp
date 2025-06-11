#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[i] != arr[j])
        {
            return true;
            i++;
        }
    }
    return false;
}
int main()
{
    int arr[]={1,2,3,4,5},n=5;
    bool ans = isSorted(arr,n);
    if (ans) cout<<"True"<<endl;
    else cout<<"False";
    return 0;
}