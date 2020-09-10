#include<bits/stdc++.h>
using namespace std;

int sum_array(int (*ptr)[8])
{
	int sum=0;
	for(int i=0;i<8;i++)
	{
		sum=sum+(*(*ptr+i));
	}
	return sum;
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int (*p)[8]=&arr;
	int x=sum_array(p);
	cout<<x;
	return 0;
}
