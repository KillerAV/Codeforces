#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin>>N;
    ll arr[N];
    for(int i=0;i<N;i++)
    	cin>>arr[i];
    if(N==1)
    	cout<<arr[0]<<endl;
    else
    {
    	ll ans=0;
    	for(int i=0;i<N;i++)
    		ans=max(ans,arr[i]);
    	for(int i=0;i<N;i++)
    		for(int j=i+1;j<N;j++)
    			ans=max(ans,arr[i]|arr[j]);
    	for(int i=0;i<N;i++)
    		for(int j=i+1;j<N;j++)
    			for(int k=j+1;k<N;k++)
    				ans=max(ans,arr[i]|arr[j]|arr[k]);
    		
    	cout<<ans<<endl;
    }
}