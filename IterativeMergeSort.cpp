#include <iostream>
using namespace std;

void merge(int arr[], int start_index,int mid, int end_index)
{
	int b[end_index-start_index+1];
	int i=start_index,j=mid+1;
	int k=0;
	while(i<=mid && j<=end_index)
	{
		if(arr[i]<arr[j])
		{
			b[k]=arr[i];
			k++;
			i++;
		}
		else
		{
			b[k]=arr[j];
			k++;
			j++;
		}
	}
	if(i>mid && j<=end_index)
	{
		while(j<=end_index)
		{
			b[k]=arr[j];
			k++;
			j++;
		}
	}
	else if(i<=mid && j>end_index)
	{
		while(i<=mid)
		{
			b[k]=arr[i];
			k++;
			i++;
		}
	}

	int y=0;
	for(int x=start_index;x<=end_index;x++)
	{
		arr[x]=b[y];
		y++;
	}
}

void i_merge_sort(int a[], int n)
{
	int p;
	for(p=2; p<=n; p=p*2)
	{
		for(int i=0; i+p-1<=n-1; i=i+p)
		{
			int low=i;
			int high= i+p-1;
			int mid= (low+high)/2;
			merge(a,low,mid,high);
		}
	}
	if(p/2 < n)
	{
		merge(a,0,p/2-1,n-1);
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
	i_merge_sort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}