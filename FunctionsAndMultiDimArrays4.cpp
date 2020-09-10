#include<bits/stdc++.h>
using namespace std;
int sum(int (*p)[2][3])
{
	int sum=0;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum+=*(*(*p+i)+j);
		}
	}
	return sum;
}
int main()
{
	int arr[][3]={{1,4,2},{3,6,7}};
	int (*ptr)[2][3]=&arr;
	int x=sum(ptr);
	cout<<x<<endl;
	
	
	return 0;
}
