#include<bits/stdc++.h>
using namespace std;



#define bit(x,i) (x&(1<<i))  //select the bit of position i of x
#define lowbit(x) ((x)&((x)^((x)-1))) //get the lowest bit of x
#define hBit(msb,n) asm("bsrl %1,%0" : "=r"(msb) : "r"(n)) //get the highest bit of x, maybe the fastest
#define SZ(x) ((int)((x).size()))
#define sz(a) ((ll)a.size(a))
#define FOREACH(i,t) for (__typeof(t.begin()) i=t.begin(); i!=t.end(); i++) // traverse an STL data structure

#define lcm(a,b) ((a)*((b)/__gcd(a,b)))
#define lcm(a,b) lcm( (ll)(a) , (ll)(b) )   // for c++17
#define mcpy(a,b) memcpy(a,b,sizeof(a))

#define FE(i,L,R) for (int i = L; i <= R; i++)
#define printA(a,L,R) FE(i,L,R) cout << a[i] << (i==R?'\n':' ')
#define printV(a) printA(a,0,a.size()-1)




int countSetBits(int n)  // count set bits in a binary number
{ 
int count = 0; 
    while (n) 
    { 
      n &= (n-1) ; 
      count++; 
    } 
    return count; 
} 

bool isSet(int n,int i)   // check if ith bit is set or not
{ 
   return n & (1 << i);  
} 

ll inline power(ll x, ll y)
{
	ll res=1;
	while(y>0)
	{
		if(y&1)
		{
			res= (res*x) % inf; 
		}
		y=y>>1;
		x= (x*x) % inf;
	}
	return res % inf;
}

#define clz(a) __builtin_clz(a)  // count leading zeroes
#define ctz(a) __builtin_ctz(a)  // count trailing zeroes
#define pop(a) __builtin_popcount(a) // count set bits only for int diff for ll




int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    #ifdef LOCAL_RELEASE
	cerr<<"\nTime elapsed: "<<1000.00 * clock()/ CLOCKS_PER_SEC <<"ms.\n";    //local
	#endif

    cout<<"Aashish Kumar";
    return 0;
}








