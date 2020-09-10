#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    int arr[] = { 1, 7, 6, 10, 5 }; 
    // int *p = arr; 
    int (*ptr)[5] = &arr; 
      
    cout<<ptr<<endl;
	cout<<ptr+1<<endl;
	cout<<endl;
	cout<<*(*ptr)<<endl;
	cout<<*(*ptr+1)<<endl;
	cout<<*(*(ptr+1))<<endl; 
      
    
    return 0; 
} 
