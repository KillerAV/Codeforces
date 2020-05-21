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
    	map<int,int> M;
    	for(int i=0;i<N;i++)
    	{
    		cin>>arr[i];
    		M[arr[i]]++;
    	}
    	int distinct=M.size();
    	int maxFreq=0;
    	for(auto it=M.begin();it!=M.end();it++)
    		maxFreq=max(maxFreq,it->second);
    	int ans=0;
    	for(int i=N/2;i>=0;i--)
    	{
    		if((maxFreq>i && distinct>=i) || (maxFreq==i && distinct>i))
    		{
    			ans=i;
    			break;
    		}

    	}
    	cout<<ans<<endl;

    }
   	
    
}