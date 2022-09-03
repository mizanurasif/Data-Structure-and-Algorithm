#include<bits/stdc++.h>
using namespace std;
int Kadane(int a[],int n)
{
    int maxsum=0,cursum=0;

    for(int i=0; i<n; i++)
    {
        cursum+=a[i];
        maxsum=max(maxsum,cursum);
        if(cursum<0)
            cursum=0;
    }
    return maxsum;
}
int main()
{
int a[7]={1,-2,-3,4,-1,2,1};
cout<<Kadane(a,7);

}
