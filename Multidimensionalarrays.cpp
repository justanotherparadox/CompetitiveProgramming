#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    int arr[2][2] = { {1,3},{6,8} };
	cout<<arr<<endl;
	cout<<arr+1<<endl;
	cout<<endl;
	cout<<*arr<<endl;
	cout<<*arr+1<<endl;
	cout<<*(arr+1)<<endl;
	cout<<*(arr+1)+1<<endl;
	cout<<endl;
	cout<<*(*arr)<<endl;  // 1
	cout<<*(*arr+1)<<endl;   //3
	cout<<*(*(arr+1))<<endl;  //6
	cout<<*(*(arr+1)+1)<<endl; //8
	
    return 0; 
} 
