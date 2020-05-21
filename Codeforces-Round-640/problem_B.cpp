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
    	if(N%2==K%2)
    	{
    		if(N<K)
    			cout<<"NO"<<endl;
    		else
    		{
    			cout<<"YES"<<endl;
    			for(int i=0;i<K-1;i++)
    				cout<<1<<" ";
    			cout<<N-K+1<<endl;
    		}
    	}
    	else if(N%2==0 && K%2==1)
    	{
    		if(N<2*K)
    			cout<<"NO"<<endl;
    		else
    		{
    			cout<<"YES"<<endl;
    			for(int i=0;i<K-1;i++)
    				cout<<2<<" ";
    			cout<<N-2*(K-1)<<endl;

    		}
    	}
    	else
    		cout<<"NO"<<endl;
    	
    }
}