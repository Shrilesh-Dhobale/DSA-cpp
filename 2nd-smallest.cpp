#include<iostream>
#include<vector>
using namespace std;

int secondsmallest(vector<int>&a,int n)
{
    int smallest=a[0];
    int ssmallest=INT16_MAX;

    for(int i=0;i<n;i++){
        if(a[i]<smallest)
        {
            ssmallest=smallest;
            smallest=a[i];
           
        }
        else if(a[i] != smallest && a[i]<ssmallest)
        {
            ssmallest=a[i];
        }
    }return ssmallest;
}
int main()
{
    vector<int>arr={35,34,12,13,4};
    int n=arr.size();

    cout<<secondsmallest(arr,n);
    return 0;
}
