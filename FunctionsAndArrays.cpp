#include<bits/stdc++.h>
using namespace std;

int sum(int *arr,int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	return sum;
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int x=sum(arr,8);
	cout<<x<<endl;
	int y=sum(arr+2,6);
	cout<<y<<endl;
	int z=sum(arr,4);
	cout<<z<<endl;
	int k=sum(arr+3,2);
	cout<<k;
	return 0;
}
