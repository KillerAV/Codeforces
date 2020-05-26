#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

bool checker(int big, int small, int N, int M)
{
	ll total=(1ll<<M)-N;
	if(total%2==0)
		return small!=big;
	else
		return small!=big+1;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin>>T;
    while(T--)
    {
    	int N,M;
    	cin>>N>>M;
    	ll arr[N];
    	set<ll> S;
    	for(int i=0;i<N;i++)
    	{
    		string temp;
    		cin>>temp;
    		ll mult=1,num=0;
    		for(int i=M-1;i>=0;i--,mult*=2)
    			if(temp[i]=='1')
    				num+=mult;
    		arr[i]=num;
    		S.insert(num);
    	}

    	
    	ll big=(1ll<<(M-1));
   		ll small=big;
   		ll ans=big-1;
   		for(int i=0;i<N;i++)
   			if(ans>=arr[i])
   				small--;
   			else
   				big--;
   		while(checker(big,small,N,M))
   		{
   			if(small<big)
   			{
   				ans++;
   				big=(1ll<<M)-ans-1;
   				small=ans+1;
		   		for(int i=0;i<N;i++)
		   			if(ans>=arr[i])
		   				small--;
		   			else
		   				big--;
   			}
   			else
   			{
   				ans--;
   				big=(1ll<<M)-ans-1;
   				small=ans+1;
		   		for(int i=0;i<N;i++)
		   			if(ans>=arr[i])
		   				small--;
		   			else
		   				big--;
   			}
   		}
   		while(S.count(ans))
   			ans--;
   		string fans;
   		for(int i=0;i<M;i++,ans/=2)
   			fans+=ans%2+'0';
   		reverse(fans.begin(),fans.end());
   		cout<<fans<<endl;
    }	
}