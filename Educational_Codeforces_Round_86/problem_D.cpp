#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   	int N,K;
   	cin>>N>>K;

   	int arr[N];
   	for(int i=0;i<N;i++)
   		cin>>arr[i];
   	sort(arr,arr+N);

   	int C[K];
   	for(int i=0;i<K;i++)
   		cin>>C[i];

   	vector<vector<int>> ans;
   	int j=N-1,size=0;
   	for(int i=K-1;i>=0;i--)
   	{
   		while(j>=0 && arr[j]>=i+1)
   			j--;

   		int count=N-j-1;
   		size=max(size,int(ceil(double(count)/C[i])));
   	}

   	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> Q;
   	for(int i=0;i<size;i++)
   	{
   		vector<int> temp;
   		ans.push_back(temp);
   		Q.push({0,i});
   	}

   	j=N-1;
   	for(int i=K-1;i>=0;i--)
   	{
   		while(j>=0 && arr[j]>=i+1)
   		{
   			pair<int,int> temp=Q.top();
   			Q.pop();
   			ans[temp.second].push_back(arr[j]);
   			Q.push({temp.first+1,temp.second});
   			j--;
   		}
   	}
   	cout<<ans.size()<<endl;
   	for(int i=0;i<ans.size();i++)
   	{
   		cout<<ans[i].size()<<" ";
   		for(int j=0;j<ans[i].size();j++)
   			cout<<ans[i][j]<<" ";
   		cout<<endl;
   	}
}