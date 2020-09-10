#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=n-2;i++)
    {
        int x=a[i];
        int minIndex=i;     //IMP---> To extract the index of the smallest element.
        for(int j=i+1;j<=n-1;j++)
        {
            if(a[j]<x)
            {
                x=a[j];
                minIndex=j;
            }
        }
        int y=a[i];            //Extra variable y for swapping
        a[i]=a[minIndex];
        a[minIndex]=y;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
	return 0;
}
