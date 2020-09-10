#include <iostream>
using namespace std; 
int main() {
    char c;
    c=cin.get();       //cin>>c;
    int count=0;
    while(c!='$')
    {
    	c=cin.get();      //cin>>c;
		count++;      
	}
	cout<<count; // cin.get() counts spaces and tabs and newline as well.
}
