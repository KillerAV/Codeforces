#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

vector<int> arr[200001];
bool mark[200001],ans[200001];
int level[200001],coun[200001];
int dfs(int node=1, int h=0)
{
    if(mark[node])
        return 0;
    mark[node]=1;
    level[node]=h;
    for(auto it=arr[node].begin();it!=arr[node].end();it++)
        coun[node]+=dfs(*it,h+1);
    return coun[node]+1;
}

long long func()
{
    queue<pair<int,int>> Q;
    long long fans=0;
    int count=0;
    if(ans[1])
        count++;
    Q.push({1,count});
    mark[1]=1;
    while(!Q.empty())
    {
        pair<int,int> temp=Q.front();
        Q.pop();
        int node=temp.first;
        if(!ans[node])
            fans+=temp.second;
        int count=temp.second;
        for(auto it=arr[node].begin();it!=arr[node].end();it++)
            if(!mark[*it])
            {
                mark[*it]=1;
                if(ans[*it])
                    Q.push({*it,count+1});
                else
                    Q.push({*it,count});
            }
    }

    return fans;

}


int main() 
{
    int N,K;
    scanf("%d %d",&N,&K);
    for(int i=0;i<N-1;i++)
    {
        int x,y;
        cin>>x>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    for(int i=1;i<=N;i++)
    {
        coun[i]=mark[i]=0;
        ans[i]=1;
    }

    dfs();

    vector<pair<int,int>> Q;
    for(int i=1;i<=N;i++)
        Q.push_back({level[i]-coun[i],i});
    sort(Q.begin(),Q.end(),greater<pair<int,int>>());
    
    for(int i=0;i<K;i++)
        ans[Q[i].second]=0;


    for(int i=1;i<=N;i++)
        mark[i]=0;
    
    cout<<func()<<endl;
   	
    
}