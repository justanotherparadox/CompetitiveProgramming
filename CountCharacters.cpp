#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    char k;
    k=cin.get();
    int c_a=0,c_d=0,c_s=0;
    while(k!='$')
    {
        int c=k;
        if((c>=97 && c<=122))
        {
            c_a++;
        }
        else if(c>=48 && c<=57)
        {
            c_d++;
        }
        else if(k==' ' || c==10 || c==9)
        {
            c_s++;
        }
        k=cin.get();
    }
    cout<<c_a<<" "<<c_d<<" "<<c_s;
  
}



