#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
	for(int j=1;j<=n-1;j++)
	{
		for(int i=0;i<=n-1-j;i++)
		{
			if(a[i]>a[i+1])
			{
				int x=a[i];
				a[i]=a[i+1];
				a[i+1]=x;
			}
		}
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

    bubble_sort(a,n);
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
    }


    return 0;
}