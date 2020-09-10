#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<=n-1;i++)
	{
	    cin>>a[i];
	}
	int x;                         // TLE using bubble sort
    for(int j=1;j<=n-1;j++)
    {
        for(int i=0;i<=n-1-j;i++)
        {
            if(arr[i]==0)
            {
                x=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=x;
            }
        }
    }
	return 0;
}
