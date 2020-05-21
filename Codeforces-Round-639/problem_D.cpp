#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M;
    cin>>N>>M;
    string arr[N];
    for(int i=0;i<N;i++)
    	cin>>arr[i];

    bool mark[N][M];
    for(int i=0;i<N;i++)
    	for(int j=0;j<M;j++)
    		if(arr[i][j]=='#')
    			mark[i][j]=0;
    		else
    			mark[i][j]=1;

    set<int> row;
    set<int> col;
    bool ans=true;
    int components=0;
    for(int i=0;i<N;i++)
    {
    	for(int j=0;j<M;j++)
    		if(!mark[i][j])
    		{
    			queue<pair<int,int>> Q;
    			Q.push({i,j});
    			mark[i][j]=1;
    			vector<pair<int,int>> temp;
    			while(!Q.empty())
    			{
    				pair<int,int> x=Q.front();
    				temp.push_back(x);
    				Q.pop();
    				int i=x.first,j=x.second;
    				if(i-1>=0 && !mark[i-1][j])
    				{
    					mark[i-1][j]=1;
    					Q.push({i-1,j});
    				}
    				if(j-1>=0 && !mark[i][j-1])
    				{
    					mark[i][j-1]=1;
    					Q.push({i,j-1});
    				}
    				if(i+1<N && !mark[i+1][j])
    				{
    					mark[i+1][j]=1;
    					Q.push({i+1,j});
    				}
    				if(j+1<M && !mark[i][j+1])
    				{
    					mark[i][j+1]=1;
    					Q.push({i,j+1});
    				}
    			}
    			for(int i=0;i<temp.size();i++)
    			{
    				if(row.count(temp[i].first))
    				{
    					ans=false;
    					break;
    				}
    				if(col.count(temp[i].second))
    				{
    					ans=false;
    					break;
    				}
    			}
    			if(!ans)
    				break;
    			for(int i=0;i<temp.size();i++)
    			{
    				row.insert(temp[i].first);
    				col.insert(temp[i].second);
    			}
    			map<int,vector<int>> A,B;
    			for(int i=0;i<temp.size();i++)
    			{
    				A[temp[i].first].push_back(temp[i].second);
    				B[temp[i].second].push_back(temp[i].first);
    			}
    			for(auto it=A.begin();it!=A.end();it++)
    			{
    				vector<int> X=it->second;
    				sort(X.begin(),X.end());
    				for(int i=1;i<X.size();i++)
    					if(X[i]-X[i-1]!=1)
    					{
    						ans=false;
    						break;
    					}
    				if(!ans)
    					break;
    			}
    			for(auto it=B.begin();it!=B.end();it++)
    			{
    				vector<int> X=it->second;
    				sort(X.begin(),X.end());
    				for(int i=1;i<X.size();i++)
    					if(X[i]-X[i-1]!=1)
    					{
    						ans=false;
    						break;
    					}
    				if(!ans)
    					break;
    			}
    			
    			if(!ans)
    				break;
    			components++;
    		}
    	if(!ans)
    		break;	
    }
    set<int> tx,ty;
    for(int i=0;i<N;i++)
    	for(int j=0;j<M;j++)
    		if(!row.count(i) && !col.count(j))
    		{
    			tx.insert(i);
    			ty.insert(j);
    		}
    for(int i=0;i<N;i++)
    	if(!row.count(i) && !tx.count(i))
    	{
    		ans=false;
    		break;
    	}
	for(int i=0;i<M;i++)
    	if(!col.count(i) && !ty.count(i))
    	{
    		ans=false;
    		break;
    	}
    if(!ans)
    	cout<<-1<<endl;
    else
    	cout<<components<<endl;
}