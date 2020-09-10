#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int i=0,j=0;
    int x;
    while(i<=n-1)
    {
        if(i==j && arr[i]!=0)
        {
            i++;
            j++;
        }
        else if(j<i && arr[i]!=0)
        {
            x=arr[i];
            arr[i]=arr[j];
            arr[j]=x;
            i++;
            j++;
        }
        else if(arr[j]!=0)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}
