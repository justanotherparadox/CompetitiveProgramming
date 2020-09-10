#include<bits/stdc++.h>
using namespace std;

int sum_array(int arr[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int y=sizeof(arr)/sizeof(int);
	int x=sum_array(arr,y);
	cout<<x;
	return 0;
}
