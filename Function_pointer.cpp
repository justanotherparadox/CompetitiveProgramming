#include<iostream>
using namespace std;

int compare(int a, int b)
{
	if(a>b)
	return 1;
	else if(a<b)
	return -1;
	else
	return 0;
}
void bubble_sort(int *a, int size, int (*compare)(int,int))
{
	int i,j,temp;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(compare(a[j],a[j+1])>0)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int i, A[]={1,2,5,21,2,3};
	bubble_sort(A,6,&compare);
	for(i=0;i<6;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}
