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
    	if(N==1)
    		cout<<1<<endl;
    	else if(N<=3)
    		cout<<-1<<endl;
    	else
    	{
    		vector<int> ans;
    		if(N%2==0)
    		{
    			for(int i=2;i<=N;i+=2)
    				ans.push_back(i);
    			ans.push_back(N-3);
    			ans.push_back(N-1);
    			for(int i=N-5;i>=1;i-=2)
    				ans.push_back(i);
    		}

    		else
    		{
    			for(int i=1;i<=N;i+=2)
    				ans.push_back(i);
    			ans.push_back(N-3);
    			ans.push_back(N-1);
    			for(int i=N-5;i>=2;i-=2)
    				ans.push_back(i);
    		}
    		for(int i=0;i<N;i++)
    			cout<<ans[i]<<" ";
    		cout<<endl;
    	}
    	
    }
}