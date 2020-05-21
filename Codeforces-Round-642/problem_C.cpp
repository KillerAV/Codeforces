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
    ll dp[500001];
    dp[1]=0;
    for(ll i=3;i<=500000;i+=2)
    	dp[i]=dp[i-2]+(4*i-4)*(i/2);
    while(T--)
    {
    	int N;
    	cin>>N;
    	cout<<dp[N]<<endl;
    	
        
    }
}