#include<bits/stdc++.h>
using namespace std;

int removeDup(vector<int>&nums)
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
int main()
{
    vector<int> arr={1,1,2,2,3,3,4,4};
    int k=removeDup(arr);
    cout<<"Unique elements are:";
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<' ';

    }

}