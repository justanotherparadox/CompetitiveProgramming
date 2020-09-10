#include<bits/stdc++.h>
using namespace std;
int sum(int arr[][3],int row)   // one dimension can be passed as an argument     
{
	int sum=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum+=arr[i][j];
		}
	}
	return sum;
	
}
int main()
{
	int arr[2][3]={{1,4,2},{3,6,7}};
	int arr2[][3]={{1,4,2},{3,6,7}};    // only size of first dimension can be omitted
	
	int y=sum(arr2,2);
	cout<<y<<endl;
	
	// sum of a row
	int x=sum(arr+1,1);               
	cout<<x<<endl;
	return 0;
}
