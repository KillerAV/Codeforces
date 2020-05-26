#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

void dfs(string *arr, int N, int i, int j)
{
	if(i<0 || j<0 || arr[i][j]=='0')
		return;
	arr[i][j]='0';
	dfs(arr,N,i-1,j);
	dfs(arr,N,i,j-1);
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
    	int N;
    	cin>>N;
    	string arr[N];
    	for(int i=0;i<N;i++)
    		cin>>arr[i];

    	for(int i=0;i<N;i++)
    	{
    		dfs(arr,N,i,N-1);
    		dfs(arr,N,N-1,i);
    	}

    	bool ans=true;
    	for(int i=0;i<N;i++)
    		for(int j=0;j<N;j++)
    			if(arr[i][j]=='1')
    				ans=false;
    	if(ans)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;

    	
    }
}