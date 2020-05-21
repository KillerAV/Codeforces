#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M,K;
    cin>>N>>M>>K;
    vector<pair<int,int>> start(K),end(K);
    for(int i=0;i<K;i++)
    	cin>>start[i].first>>start[i].second;
    for(int i=0;i<K;i++)
    	cin>>end[i].first>>end[i].second;
 
 
    string ans;
    for(int i=0;i<N-1;i++)
    	ans+='U';
    for(int i=0;i<N;i++)
    {
    	for(int i=0;i<M-1;i++)
    		ans+='R';
    	for(int i=0;i<M-1;i++)
    		ans+='L';
    	if(i!=N-1)
    		ans+='D';
    }
    cout<<ans.size()<<endl;
    cout<<ans<<endl;
    
}