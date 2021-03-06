#include <iostream>
#include<climits>
using namespace std;

void selection_sort(int a[], int n)
{
	for(int i=0;i<=n-2;i++)
    {
        int min=INT_MAX;
        int x=-1;
        for(int j=i;j<=n-1;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                x=j;
            }
        }
        int y=a[x];
        a[x]=a[i];
        a[i]=y;
    }
}

int main() 
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }

    selection_sort(a,n);
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
    }
    return 0;
}