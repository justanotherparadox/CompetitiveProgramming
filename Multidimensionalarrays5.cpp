#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    int arr[2][2][4] = { { {1,3,5,2},{2,5,4,7} },{ {9,7,5,2},{2,4,6,8} } };
//    int (*ptr)[2][4]=arr;
//    cout<<ptr<<endl;
//    cout<<ptr+1;
    
    int (*ptr)[4]=*arr;
    cout<<ptr<<endl;
    cout<<ptr+1<<endl;
    cout<<endl;
    
    cout<<*ptr<<endl;
    cout<<*(*ptr)<<endl;
    return 0; 
} 
