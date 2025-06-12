#include<bits/stdc++.h>
using namespace std;

int removeDup(int arr[],int n)
{
    int i=0;
    int n=nums.size();
    for(int j=1;j<n;j++)
    {
        if(nums[i]!=nums[j])
        {
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;//len of unique elements +1 because index of starts from 0
}