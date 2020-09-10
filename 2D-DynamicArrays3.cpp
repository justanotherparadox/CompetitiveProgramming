#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // Using a double pointer

    int r,c;
    cin>>r>>c;
    int **p= new int*[r];
    // int **p = (int **)malloc(r * sizeof(int *));

    for(int i=0;i<r;i++)
    {
        p[i]= new int[c];
        // p[i] = (int *)malloc(c * sizeof(int));

        for(int j=0;j<c;j++)
        {
            cin>>p[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<p[i][j]<<" ";
        }
    }

    for(int i=0;i<r;i++)
    {
        delete [] p[i];
    }
    delete [] p;



    return 0;
}
