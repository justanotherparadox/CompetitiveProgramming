#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // Using an array of pointers

    int r,c;
    cin>>r>>c;
    int *ptr[r];

    for(int i=0;i<r;i++)
    {
        ptr[i] = new int[c];
        // ptr[i] = (int*)malloc(c*sizeof(int));
        // *(ptr+i) = new int[c];
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>ptr[i][j];
            cout<<*(*(ptr+i)+j)<<" ";
        }
    }

    for(int i=0;i<r;i++)
    {
        delete [] ptr[i];
    }
    return 0;
}
