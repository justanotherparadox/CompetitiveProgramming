#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    int arr[3][2] = { {1,3},{6,8},{7,4} };
    // int *p=arr;
    // int (*ptr)[2]=arr;
    int (*ptr)[3][2]=&arr;
	cout<<ptr<<endl;
	cout<<ptr+1;
	
    
    
    
    
      
    
    return 0; 
} 
