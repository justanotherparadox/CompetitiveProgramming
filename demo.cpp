#include<bits/stdc++.h>
using namespace std;
void print(int *arr, int size)
{
    // int x=sizeof(arr);
    // cout<<x;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int x=sizeof(a);
    cout<<x<<endl;
    cout<<sizeof(int)<<endl;
    print(a,5);

    return 0;
}
