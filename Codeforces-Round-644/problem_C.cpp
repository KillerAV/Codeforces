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
    	set<int> S;
    	int even=0;
    	for(int i=0;i<N;i++)
    	{
    		cin>>arr[i];
    		S.insert(arr[i]);
    		if(arr[i]%2==0)
    			even=1-even;
    	}
    	if(even==0)
    		cout<<"YES"<<endl;
    	else
    	{
    		bool flag=false;
    		for(auto it=S.begin();it!=S.end();it++)
    			if(S.count(*it+1))
    			{
    				flag=true;
    				break;
    			}
    		if(flag)
    			cout<<"YES"<<endl;
    		else
    			cout<<"NO"<<endl;
    	}

    	
    }
}