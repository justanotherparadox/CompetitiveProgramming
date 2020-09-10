#include<bits/stdc++.h>
using namespace std;
void display_element(int *p)
{
	cout<<*p<<endl;
}
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
	
	display_element(&arr[1][1]);
	
	int x=sum(arr,2);
	cout<<x<<endl;
	int y=sum(arr2,2);
	cout<<y<<endl;
	return 0;
}
