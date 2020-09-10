#include<bits/stdc++.h>
using namespace std;

void print_element(int *x)
{
	cout<<*x<<endl;
	cout<<*(x+1)<<endl;
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	print_element(&arr[2]);
	return 0;
	
}
