#include<bits/stdc++.h>
using namespace std;
// tow pass sorting algorithmn
void two_pass_sort ( int *arr,int n)
{
    int c0=0,c1=0,c2=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
            c0++;
        else if(arr[i]==1)
            c1++;
        else
            c2++;
    }
    for(int i=0; i<n; i++)
    {
        if(c0>0)
            arr[i]=0,c0--;
        else if(c1>0)
            arr[i]=1,c1--;
        else
            arr[i]=2,c2--;
    }

}
void three_way_partition(int *arr ,int n)
{
   int low=0,mid=0,high=n-1;
   while(mid<=high)
   {
       if(arr[mid]==0)
       {
           swap(arr[mid],arr[low]);
           mid++;
           low++;
       }
       else if(arr[mid]==2)
       {
           swap(arr[mid],arr[high]);
           high--;
       }
       else
        mid++;

   }
}
int main()
{
int a[6]={2,0,2,2,0,1};
//two_pass_sort(a,6);
three_way_partition(a,6);
for(int i=0;i<6;i++)
{
cout<<a[i]<<" ";
}

}

