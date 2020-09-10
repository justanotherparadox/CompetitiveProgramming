#include<bits/stdc++.h>
using namespace std;
int main() 
{ 
    char arr[5][7][6]; 
    char (*p)[5][7][6] = &arr; 
  
    /* Hint: &arr - is of type const pointer to an array of 
       5 two dimensional arrays of size [7][6] */
  
    cout<<&arr<<endl;
    cout<<&arr+1<<endl;
    printf("%d\n", (&arr + 1) - &arr);
	cout<< (int *)(&arr + 1)<<endl;
	cout<<(int *)&arr<<endl; 
    printf("%d\n", (int *)(&arr + 1) - (int *)&arr);  
    return 0; 
} 
