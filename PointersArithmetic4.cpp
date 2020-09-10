#include<stdio.h> 
#include<iostream>
using namespace std;
int main() 
{ 
  char arr[] = "geksforgeeks"; 
  char *p = arr; 
  cout<<++*p<<endl;                         // *p=*p+1; or ++(*p);
  cout<<*p<<endl;
  cout<<p<<endl;
  int a=10;
  cout<<++a<<endl;
  return 0; 
} 
