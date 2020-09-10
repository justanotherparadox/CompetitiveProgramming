#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x;
    cin>>x;
    int count=1;
    for(int i=1;count<=x;i++)
    {
        int t=3*i+2;
        if(t%4!=0)
        {
            cout<<t<<" ";
            count++;
        }
    }
}

