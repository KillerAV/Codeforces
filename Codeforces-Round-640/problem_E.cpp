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
    	int N;
    	cin>>N;
    	int arr[N];
    	for(int i=0;i<N;i++)
    		cin>>arr[i];

    	int mark[N+1];
    	for(int i=1;i<=N;i++)
    		mark[i]=0;
    	for(int i=0;i<N;i++)
    	{
    		int sum=arr[i];
    		for(int j=i+1;j<N;j++)
    		{
    			sum+=arr[j];
    			if(sum>N)
    				break;
    			mark[sum]=1;
    		}
    	}
    	int ans=0;
    	for(int i=0;i<N;i++)
    		if(mark[arr[i]])
    			ans++;
    	cout<<ans<<endl;
    }
}