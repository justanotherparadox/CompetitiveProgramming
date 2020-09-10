#include <iostream>
#include<math.h>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    int n;
    cin>>n;
    // bool flag=false;  MISTAKE
    for(int i=2;i<=n;i++)
    {
        bool flag=false;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                flag=true;
                break;
            }
        }
        if(!flag)
        {
            cout<<i<<endl;
        }
    }
  
}



