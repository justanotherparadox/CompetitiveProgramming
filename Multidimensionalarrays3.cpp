#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    int arr[3][2] = { {1,3},{6,8},{7,4} };
    // int *p=arr;
    // int (*ptr)[2]=arr;
	
	
    int *p = *arr; 
    cout<<*(p+3)<<endl;
	
	cout<<endl;
	cout<<*arr+2<<endl;
	cout<<*(*arr+2); 
    
    
    
      
    
    return 0; 
} 
