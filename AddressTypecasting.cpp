#include<iostream>
using namespace std;
int main() 
{ 
  int a=65;
  int *p=&a;
  char *pc=(char*)p;
  cout<<*p<<endl;
  cout<<*pc<<endl;
  cout<<*(pc+1)<<endl;
  cout<<*(pc+2)<<endl;
  cout<<*(pc+3)<<endl;
  float *pf=(float*)p;
  cout<<*pf<<endl;
  cout<<sizeof(float)<<endl;
  return 0;
} 
