#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int prev,current;
    cin>>prev;
    int count=2;
    bool isDec=true;
    while(count<=n)
    {
        cin>>current;
        if(current==prev)
        {
            cout<<"false";
            return 0;
        }
        else if(current<prev)
        {
            if(isDec==false)
            {
                cout<<"false";
                return 0;
            }
        }
        else
        {
            if(isDec==true)
            {
                isDec=false;
            }
        }
        count++;
        prev=current;
    }
    cout<<"true";
    return 0;

}
