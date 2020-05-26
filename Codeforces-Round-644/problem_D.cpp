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
    	int N,K;
    	cin>>N>>K;
    	int ans=N;
    	for(int i=1;i*i<=N;i++)
    		if(N%i==0)
    		{
    			if(i<=K)
    				ans=min(ans,N/i);
    			if(N/i<=K)
    				ans=min(ans,i);
    		}
    	cout<<ans<<endl;

    	
    }
}