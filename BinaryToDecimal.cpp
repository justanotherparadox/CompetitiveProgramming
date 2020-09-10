#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// Write your code here
	int n,x;
    cin>>n;
    int d=n;
    int count=0;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    int sum=0;
    for(int i=0;i<=count-1;i++)
    {
        x=d%10;
        sum=sum+x*pow(2,i);
        d=d/10;
    }
    cout<<sum;
}

