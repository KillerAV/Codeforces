#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin>>T;
    while(T--)
    {

    	int x1,x2,y1,y2;
    	cin>>x1>>y1>>x2>>y2;
    	int a=x2-x1+1,b=y2-y1+1;
    	int N=min(a,b),M=max(a,b);
    	ll last=N-1;
    	ll ans=(last*(last+1)/2) + (last*(last-1)/2) + (N+M-1-2*last-1)*last + 1;
    	cout<<ans<<endl;

    	
    }
}