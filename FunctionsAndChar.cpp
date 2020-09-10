#include<bits/stdc++.h>
using namespace std;

void print(char *c)
{
	int i=0;
	while(*(c+i)!='\0')   // *c can also be written in place of *(c+i)
	{
		cout<<*(c+i);     // cout<<*c;
		i++;              // c++;
	}
}
int main()
{
	char c[6]="Hello";
	print(c);
	
	return 0;
	
}
