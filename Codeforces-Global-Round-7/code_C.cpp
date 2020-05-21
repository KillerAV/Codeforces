#include <bits/stdc++.h>
#define M 998244353
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
    	int N,K;
    	cin>>N>>K;
    	long long arr[N],ans1=0;
    	for(int i=0;i<N;i++)
    		cin>>arr[i];
    	vector<int> S;
    	for(int i=N,j=0;j<K;i--,j++)
    		ans1+=i;
    	int lastIndex=-1;
    	long long ans2=1;
    	for(int i=0;i<N;i++)
    		if(arr[i]>N-K && arr[i]<=N)
    		{
    			if(lastIndex!=-1)
    			{
    				ans2=(ans2*(i-lastIndex))%M;
    			}
    			lastIndex=i;
    		}
    	cout<<ans1<<" "<<ans2<<endl;
    	
    }
    
}