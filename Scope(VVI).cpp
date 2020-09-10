#include<iostream>
using namespace std;
int main()
{
	int i=10;
	cout<<i<<endl;
	
	if(i==10)
	{
		int i=23;
		cout<<i<<endl;
		// This i has only scope till here. Only till braces of if statement.
		// The closest one is printed although another i is also there within the scope but is different.
	}
	cout<<i<<endl; // This i has scope for the whole main function.
	return 0;
}
// We cannot declare int i=10 and int i=23 within same pair of braces. (VVI)
