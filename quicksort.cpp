#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int len, int start_index, int end_index)
{
    int key=a[start_index];
    int count=0;
    for(int i=start_index+1;i<=end_index;i++)
    {
        if(a[i]<=key)
        {
            count++;
        }
    }
    int temp = key;
    a[start_index]= a[start_index+count];
    a[start_index+count]=key;
    int i=start_index, j=end_index;
    while(i<start_index+count && j>start_index+count)
    {
        if(a[i]<a[start_index+count])
        {
            i++;
        }
        else if(a[j]>a[start_index+count])
        {
            j--;
        }
        else
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }
    return start_index+count;
}

void quick_sort(int arr[], int len, int start_index, int end_index)
{
    if(start_index >= end_index)
    {
        return;
    }

    int c = partition(arr,len,start_index,end_index);

    quick_sort(arr, c-start_index , start_index, c-1);
    quick_sort(arr, end_index-c , c+1, end_index);
}



void quickSort(int a[], int size)
{
    quick_sort(a,size,0,size-1);
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
    quickSort(ptr,n);
    for(int i=0;i<n;i++)
    {
        cout<<ptr[i]<<" ";
    }

    delete [] ptr;

    return 0;
}
