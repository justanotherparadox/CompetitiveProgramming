#include<iostream>
using namespace std;
int main()
{
	for(int k=0;k<5;k++)
	{
		cout<<"AASHISH"<<endl;
	}
	cout<<k<<endl;
	//this cout will produce an error since the scope of k is within the braces of for loop.
}
