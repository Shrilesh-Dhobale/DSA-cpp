#include<iostream>
using namespace std;

int swapMinMax(int arr[],int n)
{
    int minIndex=0;
    int maxIndex=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[maxIndex])
        {
            maxIndex=i;
        }
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]<arr[minIndex])
        {
            minIndex=i;
        }
    }
}