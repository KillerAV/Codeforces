#include <bits/stdc++.h>
using namespace std;

int parent[200001][32];
int height[200001];

void firstparent(vector<int> *arr,int node=1,int par=0,int h=0){
	parent[node][0]=par;
	height[node]=h;
	for(auto it=arr[node].begin();it!=arr[node].end();it++)
		if(*it!=par)
			firstparent(arr,*it,node,h+1);
}

void calcParent(vector<int> *arr, int N)
{
	for(int i=1;i<32;i++)
		for(int j=1;j<=N;j++)
			parent[j][i]=parent[parent[j][i-1]][i-1];
}

int LCA(vector<int> *arr,int u, int v)
{
	if(height[u]>height[v])
        swap(u,v);
    int diff=height[v]-height[u];
    int mult=0;
    while(diff)
    {
        if(diff%2==1)
            v=parent[v][mult];
        diff/=2;
        mult++;
    }

    ///u and v are at same height
    if(u==v)
        return u;
    for(int i=31;i>=0;i--)
        if(parent[u][i]!=parent[v][i])
        {
            u=parent[u][i];
            v=parent[v][i];
        }

    return parent[u][0];
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M;
    cin>>N>>M;
    vector<int> arr[N+1];
    for(int i=0;i<N-1;i++)
    {
    	int x,y;
    	cin>>x>>y;
    	arr[x].push_back(y);
    	arr[y].push_back(x);
    }
    firstparent(arr);
    calcParent(arr,N);
    
    while(M--)
    {
    	int n;
    	cin>>n;
    	vector<int> nodes(n);
    	for(int i=0;i<n;i++)
    		cin>>nodes[i];
    	int maxheightnode=nodes[0];
    	for(int i=1;i<n;i++)
    		if(height[maxheightnode]<height[nodes[i]])
    			maxheightnode=nodes[i];
    	bool ans=true;
    	for(int i=0;i<n;i++)
    	{
    		int lca = LCA(arr, maxheightnode, nodes[i]);
    		if(height[nodes[i]]-height[lca]>1)
    		{
    			ans=false;
    			break;
    		}
    	} 
    	if(ans)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    }
    
}