#include<bits/stdc++.h>
using namespace std;
int sum(int (*p)[3],int row)
{
	int sum=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum+=*(*(p+i)+j);
		}
	}
	return sum;
}
int main()
{
	int arr[][3]={{1,4,2},{3,6,7}};
	int (*ptr)[3]=arr;
	int x=sum(ptr,2);
	cout<<x<<endl;
	
	
	return 0;
}
