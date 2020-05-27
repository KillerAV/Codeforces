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
    T=1;
    while(T--)
    {

    	int N;
    	ll X;
    	cin>>N>>X;
    	N*=2;
    	ll arr[N];
    	for(int i=0;i<N/2;i++)
    	{
    		cin>>arr[i];
    		arr[i+N/2]=arr[i];
    	}
    	int start=0;
    	int end=0;
    	ll sum=0,ans=0,fans=0;
    	while(end<N && sum+arr[end]<=X)
    	{
    		sum+=arr[end];
    		ans+=arr[end]*(arr[end]+1)/2;
    		end++;
    	}
    	if(end<N)
    	{
	    	ll curr=X-sum;
	    	ll x=min(arr[start],arr[end]-curr);
	    	fans=max(fans,ans+curr*x+curr*(curr+1)/2);
	    }
    	while(end<N)
    	{
    		sum-=arr[start];
    		ans-=arr[start]*(arr[start]+1)/2;
    		start++;
    		while(end<N && sum+arr[end]<=X)
	    	{
	    		sum+=arr[end];
	    		ans+=arr[end]*(arr[end]+1)/2;
	    		end++;
	    	}
	    	if(end<N)
	    	{
		    	ll curr=X-sum;
		    	ll x=min(arr[start],arr[end]-curr);
		    	fans=max(fans,ans+curr*x+curr*(curr+1)/2);
		    }
    	}
    	cout<<fans<<endl;

    	
    }
}