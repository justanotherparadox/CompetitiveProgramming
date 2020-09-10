#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // Jagged array

    int r,c;
    cin>>r;
    int a[r];
    int **p= new int*[r];
    for(int i=0;i<r;i++)
    {
        cin>>a[i];
        p[i]= new int[a[i]];
        for(int j=0;j<a[i];j++)
        {
            cin>>p[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<a[i];j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<r;i++)
    {
        delete [] p[i];
    }
    delete [] p;
    return 0;
}
