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
   		int N,K;
   		cin>>N>>K;
   		int arr[N];
   		set<int> S;
   		for(int i=0;i<N;i++)
   		{
   			cin>>arr[i];
   			S.insert(arr[i]);
   		}
   		if(S.size()>K)
   			cout<<-1<<endl;
   		else
   		{
   			vector<int> ans;
   			for(auto it=S.begin();it!=S.end();it++)
   				ans.push_back(*it);
   			while(ans.size()<K)
   			{
   				ans.push_back(1);
   			}
   			cout<<N*K<<endl;
   			for(int i=0;i<N;i++)
   			{
   				for(int i=0;i<K;i++)
   					cout<<ans[i]<<" ";
   			}
   			cout<<endl;
   		}
   		
   	}
}