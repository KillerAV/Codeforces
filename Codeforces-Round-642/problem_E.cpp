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
    	string str;
    	cin>>str;
    	int total=0,x;
    	for(int i=0;i<N;i++)
    		if(str[i]=='1')
    			total++;
    	x=total;
    	int ans=total;
    	int count=0;
    	int prev[N],C[N];
    	for(int i=N-1,j=0;i>=0;i--,j++)
    	{
    		if(j<K)
	    		prev[i]=C[i]=(str[i]=='0')-(str[i]=='1');
    		else
    			prev[i]=(str[i]=='0')-(str[i]=='1')+min(0,prev[i+K]);
    	}
    	for(int i=0;i<N;i++)
    	{
    		ans=min(ans,prev[i]+total+count);
    		if(str[i]=='1')
    		{
    			total--;
    			count++;
    		}
    	}
    	
    	cout<<ans<<endl;
        
    }
}