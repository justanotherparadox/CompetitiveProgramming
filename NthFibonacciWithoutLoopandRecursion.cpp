#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    int i=1;
    //int x=1,y=1;
    int a=1,b=1,c;
    if(n<=2)
    cout<<1;
    for(i=3;i<=n;i++)
    {
        c=a+b;
    	a=b;
        b=c;
    }
    cout<<c;
    
}



