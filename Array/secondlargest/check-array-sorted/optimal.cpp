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