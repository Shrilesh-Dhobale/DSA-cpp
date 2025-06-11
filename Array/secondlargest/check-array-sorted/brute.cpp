#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],n)
{
    for(int i=0; i<n ;i++)
    {
        for(int j=1; j<n ;j++)
        {
            if(arr[j]<arr[i])
            {
                return false;
            }
        }
    }
    return true;
}
