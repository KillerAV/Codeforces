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
    	long long N;
    	cin>>N;
    	long long ans=0,mult=2;
    	while(N)
    	{
    		if(N%2==1)
    			ans+=mult-1;
    		N/=2;
    		mult*=2;
    	}
    	cout<<ans<<endl;
    	
    	
    }
}