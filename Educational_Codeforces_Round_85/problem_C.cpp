#include <bits/stdc++.h>
#define mod 1000000007
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
    	long long A[N],B[N];
    	for(int i=0;i<N;i++)
    		cin>>A[i]>>B[i];
    	long long next[N];
    	for(int i=0;i<N;i++)
    	{
    		int x=(i+1)%N;
    		next[i]=max(0ll,A[x]-B[i]);
    	}

    	long long sum=0;
    	for(int i=0;i<N;i++)
    		sum+=next[i];

    	long long ans=1000000000000000000;
    	for(int i=0;i<N;i++)
    	{
    		int p=(i-1+N)%N;
    		ans=min(ans,A[i]+sum-next[p]);

    	}
    	cout<<ans<<endl;

   
    	
    }
    
}