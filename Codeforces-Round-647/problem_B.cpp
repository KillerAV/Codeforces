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
    	set<int> S;
    	for(int i=0;i<N;i++)
    	{
    		int temp;
    		cin>>temp;
    		S.insert(temp);
    	}
    	int ans=-1;
    	for(int i=1;i<=1024;i++)
    	{
    		set<int> T;
    		for(auto it=S.begin();it!=S.end();it++)
    			T.insert((*it)^i);
    		if(S==T)
    		{
    			ans=i;
    			break;
    		}
    	}
    	cout<<ans<<endl;
    	
    	
    }
}