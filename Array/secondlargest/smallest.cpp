#include<iostream>
#include<vector>
using namespace std;

int secondlargest(vector<int>&a,int n){
    int largest=a[0];
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(a[i]>largest)
        {
            slargest=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>slargest)
        {
            slargest=a[i];
        }
    }
}
int main()
{
    vector<int>arr={12,35,1,10,34};
    int n=arr.size();

    cout<<secondlargest(arr,n)<<endl;
    return 0;
}