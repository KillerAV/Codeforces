#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

bool check(int ans[50][50], int N, int M, int A, int B)
{
	int row[50]={0},col[50]={0};
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
		{
			row[i]+=ans[i][j];
			col[j]+=ans[i][j];
		}
	for(int i=0;i<N;i++)
		if(row[i]!=A)
			return 0;
	for(int i=0;i<M;i++)
		if(col[i]!=B)
			return 0;
	return 1;
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
    	int N,M,A,B;
    	cin>>N>>M>>A>>B;
    	int ans[50][50]={0};
    
    	int row=0,col=0;
    	while(row<N)
    	{
    		for(int j=0;j<A;j++,col++)
    			ans[row][col%M]=1;
    		row++;
    	}
    	if(check(ans,N,M,A,B))
    	{
    		cout<<"YES"<<endl;
    		for(int i=0;i<N;i++)
    		{
    			for(int j=0;j<M;j++)
    				cout<<ans[i][j];
    			cout<<endl;
    		}
    	}
    	else
    		cout<<"NO"<<endl;
    	
    }
}