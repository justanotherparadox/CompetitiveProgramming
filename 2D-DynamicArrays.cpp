#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int r,c;
    cin>>r>>c;
    int *ptr = new int[r*c];
    // int *ptr= (int*)malloc(r*c*sizeof(int));

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>*(ptr + i*c + j);
            cout<<*(ptr + i*c + j)<<" ";
        }
    }

    delete [] ptr;

    return 0;
}
