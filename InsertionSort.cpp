#include <iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
	for(int i=1;i<=n-1;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0)
        {
            if(a[j]>key)
            {
                a[j+1]=a[j];
                j--;
            }
            else if(a[j]<key)
            {
                break;
            }
        }
        a[j+1]=key;
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

    insertion_sort(a,n);
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
    }


    return 0;
}