#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int x=5*n*n-4;
	long long int y=5*n*n+4;
	double a=sqrt(x);
	double b=sqrt(y);
	int c=floor(a);
	int d=floor(b);
	if((a-c)==0 || (b-d)==0)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
