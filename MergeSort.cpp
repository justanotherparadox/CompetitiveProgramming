#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int len, int start_index, int end_index)
{
    int b[len];
    int mid= (start_index+end_index)/2;
    int i=start_index, j=mid+1;
    int k=0;
    while(i<=mid && j<=end_index)
    {
        if(arr[i]<arr[j])
        {
            b[k]=arr[i];
            k++;
            i++;
        }
        else
        {
            b[k]=arr[j];
            k++;
            j++;
        }
    }
    if(i>mid && j<=end_index)
    {
        for(int x=j; x<=end_index; x++)
        {
            b[k]=arr[x];
            k++;
        }
    }
    else if(j>end_index && i<=mid)
    {
        for(int x=i; x<=mid; x++)
        {
            b[k]=arr[x];
            k++;
        }
    }

    int y=0;
    for(int x=start_index; x<=end_index; x++)
    {
        arr[x]=b[y];
        y++;
    }
}

void merge_sort(int a[], int len, int start_index, int end_index)
{
    if(start_index==end_index)
    {
        return;
    }
    int mid= (start_index+end_index)/2;

    merge_sort(a, mid-start_index+1, start_index, mid);
    merge_sort(a, end_index-mid, mid+1, end_index);

    merge(a, end_index-start_index+1, start_index, end_index);
}

void mergeSort(int input[], int size)
{
    merge_sort(input,size,0,size-1);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int *ptr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    mergeSort(ptr,n);
    for(int i=0;i<n;i++)
    {
        cout<<ptr[i]<<" ";
    }

    delete [] ptr;


    return 0;
}
