#include<bits/stdc++.h>
using namespace std;
int main() 
{ 
  char arr[] = "gheksforgeeks"; 
  char *p = arr; 
  *p++;                           // p=p+1; *p;    or *(p++)
  cout<<*p<<endl;
  int a=10;
  a++;
  cout<<a; 
  return 0; 
} 
