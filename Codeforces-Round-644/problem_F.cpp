#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

bool func(int dp[1024][10], string *arr, int N, string &ans, string &output, int i=0, int mark=0)
{
	if(i==arr[0].size())
	{
		ans=output;
		return 1;
	}
	if(dp[mark][i]==0)
		return 0;
	for(int j=0;j<N;j++)
	{
		output+=arr[j][i];
		int newmark=mark;
		for(int k=0;k<N;k++)
			if(arr[j][i]!=arr[k][i])
			{	
				if((mark&(1<<k)))
				{
					newmark=-1;
					break;
				}
				else
					newmark=(newmark|(1<<k));
			}
		if(newmark!=-1 && func(dp,arr,N,ans,output,i+1,newmark))
		{
			dp[mark][i]=1;
			return 1;
		}
		output.pop_back();
	}
	dp[mark][i]=0;
	return 0;
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
    	string arr[N];
    	for(int i=0;i<N;i++)
    		cin>>arr[i];

    	string ans="-1",output;
    	int dp[1024][10];
    	for(int i=0;i<1024;i++)
    		for(int j=0;j<10;j++)
    			dp[i][j]=-1;
    	func(dp,arr,N,ans,output);

    	cout<<ans<<endl;
    }
}