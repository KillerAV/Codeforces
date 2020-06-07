#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;


void func(string *arr, bool mark[50][50], int N, int M, int i, int j, vector<pair<int,int>> &output, char match)
{
	if(i<0 || i==N || j<0 || j==M || mark[i][j] || arr[i][j]!=match)
		return;
	mark[i][j]=1;
	output.push_back({i,j});
	func(arr,mark,N,M,i+1,j,output,match);
	func(arr,mark,N,M,i-1,j,output,match);
	func(arr,mark,N,M,i,j+1,output,match);
	func(arr,mark,N,M,i,j-1,output,match);
}

bool ispossible(string *arr, int mark[50][50], int N, int M, int i, int j, vector<pair<int,int>> &output)
{
	if(i<0 || i==N || j<0 || j==M || mark[i][j]==0 || arr[i][j]=='B' || arr[i][j]=='#')
		return false;
	if(mark[i][j]==1)
		return true;
	if(i==N-1 && j==M-1)
		return true;

	bool ans=0;
	mark[i][j]=0;
	output.push_back({i,j});

	ans=(ans || ispossible(arr,mark,N,M,i+1,j,output));
	ans=(ans || ispossible(arr,mark,N,M,i-1,j,output));
	ans=(ans || ispossible(arr,mark,N,M,i,j+1,output));
	ans=(ans || ispossible(arr,mark,N,M,i,j-1,output));
	mark[i][j]=ans;
	return ans;
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

    	bool mark[50][50]={0};
    	bool flag=true;
    	for(int i=0;i<N;i++)
    		for(int j=0;j<M;j++)
    			if(!mark[i][j] && arr[i][j]=='B')
    			{
    				vector<pair<int,int>> output;
    				func(arr,mark,N,M,i,j,output,'B');
    				for(int i=0;i<output.size();i++)
    				{
    					int x=output[i].first,y=output[i].second;
    					if(x-1>=0)
    						if(arr[x-1][y]=='G')
    							flag=false;
    						else if(arr[x-1][y]=='.')
    							arr[x-1][y]='#';
    					if(x+1<N)
    						if(arr[x+1][y]=='G')
    							flag=false;
    						else if(arr[x+1][y]=='.')
    							arr[x+1][y]='#';
    					if(y-1>=0)
    						if(arr[x][y-1]=='G')
    							flag=false;
    						else if(arr[x][y-1]=='.')
    							arr[x][y-1]='#';
    					if(y+1<M)
    						if(arr[x][y+1]=='G')
    							flag=false;
    						else if(arr[x][y+1]=='.')
    							arr[x][y+1]='#';
    				}
    			}



    	int mark2[50][50];
    	for(int i=0;i<N;i++)
    		for(int j=0;j<M;j++)
    			mark2[i][j]=-1;
    	for(int i=0;i<N;i++)
    		for(int j=0;j<M;j++)
    			if(!mark[i][j] && arr[i][j]=='G')
    			{
    				vector<pair<int,int>> output;
    				func(arr,mark,N,M,i,j,output,'G');

    				output.clear();
    				if(!ispossible(arr,mark2,N,M,i,j,output))
    					flag=false;
    				else
    					for(int i=0;i<output.size();i++)
    						mark2[output[i].first][output[i].second]=1;

    			}

    	if(flag)
    		cout<<"Yes"<<endl;
    	else
    		cout<<"No"<<endl;



    	
    }
}