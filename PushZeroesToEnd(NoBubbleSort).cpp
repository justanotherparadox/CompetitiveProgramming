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
	    if(arr[i]==0)
	    count++;
	}
	cout<<count<<endl;
	int i=0,j=n-1;
    int x;
    while(i<j)
    {
        if(arr[i]==0)
        {
            if(arr[j]!=0)
            {
                x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
                i++;
                j--;
            }
            else
            {
                j--;
            }
        }
        else
        {
            i++;
        }
    }
    count=0;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        if(arr[i]==0)
        count++;
    }
    cout<<endl;
    cout<<count;
	return 0;
}
