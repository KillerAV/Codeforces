#include <bits/stdc++.h>
#define mod 1000000007
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
    	int N;
    	cin>>N;
    	int arr[N];
    	for(int i=0;i<N;i++)
    		cin>>arr[i];
    	bool left[N],right[N];
    	for(int i=0;i<N;i++)
    		left[i]=right[i]=0;
    	int maxElement=0;
    	unordered_set<int> S;
    	for(int i=0;i<N;i++)
    	{
    		maxElement=max(maxElement,arr[i]);
    		if(S.count(arr[i]))
    			break;
    		S.insert(arr[i]);
    		if(maxElement==S.size())
    			left[i]=1;
    	}
    	maxElement=0;
    	S.clear();
    	for(int i=N-1;i>=0;i--)
    	{
    		maxElement=max(maxElement,arr[i]);
    		if(S.count(arr[i]))
    			break;
    		S.insert(arr[i]);
    		if(maxElement==S.size())
    			right[i]=1;
    	}
    	vector<pair<int,int>> ans;
    	for(int i=0;i<N-1;i++)
    		if(left[i] && right[i+1])
    			ans.push_back({i+1,N-i-1});
    	cout<<ans.size()<<endl;
    	for(int i=0;i<ans.size();i++)
    		cout<<ans[i].first<<" "<<ans[i].second<<endl;

    }
}