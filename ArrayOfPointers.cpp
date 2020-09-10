#include <bits/stdc++.h>
using namespace std; 
int main() 
{ 
    int arr[] = { 1, 2, 3 }; 
    int x=sizeof(arr)/sizeof(int);
    
    int *ptr[x]; 
  
    for (int i = 0; i < x; i++) 
	{
        ptr[i] = &arr[i];
		cout<<ptr[i]<<endl; 
		cout<<*(ptr+i)<<endl;
    } 
   
    for (int i = 0; i < x; i++) 
	{
        cout<<*ptr[i]<<endl;  
    } 
    
    int **p=ptr;
    cout<<p[0]<<endl;
    cout<<*p[0]<<endl;
    cout<<*(*p+1)<<endl;
    cout<<*(*p+2)<<endl;
    for(int i=0;i<x;i++)
    {
    	cout<<*p+i<<endl;
    	cout<<*(p+i)<<endl;       //IMP
	}
    return 0;
}
