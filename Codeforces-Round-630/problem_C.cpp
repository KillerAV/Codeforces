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
    	int N,K;
    	cin>>N>>K;
 
    	string str;
    	cin>>str;
    	int ans=0;
    	for(int i=0,j=K-1;i<=j;i++,j--)
    	{
    		unordered_map<int,int> M;
    		int distinct=0;
    		for(int k=i;k<N;k+=K,distinct++)
    			M[str[k]-'a']++;
 
    		if(i!=j)
    			for(int k=j;k<N;k+=K,distinct++)
    				M[str[k]-'a']++;
 
    		int count=0;
    		for(auto it=M.begin();it!=M.end();it++)
    			count=max(count,it->second);
    		ans+=distinct-count;
 
 
 
    	}
    	cout<<ans<<endl;
 
 
    }
    
}