#include<bits/stdc++.h>
using namespace std;
int sum(int *a, int size)       // int a[] can also be used        
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=a[i];
	}
	return sum;
	
}
int main()
{
	int arr[2][3]={{1,4,2},{3,6,7}};
	
	// sum of a row
	int x=sum(*(arr+1),3);               
	cout<<x<<endl;
	
	// sum of part of a row
	int y=sum(*(arr+1)+1,2);
	cout<<y<<endl;
	return 0;
}
