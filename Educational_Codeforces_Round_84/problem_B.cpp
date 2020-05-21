#include <bits/stdc++.h>
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
    	vector<int> arr[N];
    	for(int i=0;i<N;i++)
    	{
    		int x;
    		cin>>x;
    		for(int j=0;j<x;j++)
    		{
    			int temp;
    			cin>>temp;
    			arr[i].push_back(temp);
    		}
    	}
 
    	bool mark[N+1];
    	for(int i=0;i<=N;i++)
    		mark[i]=0;
    	int unmarried=-1;
    	for(int i=0;i<N;i++)
    	{
    		int j=0;
    		while(j<arr[i].size() && mark[arr[i][j]])
    			j++;
    		if(j==arr[i].size())
    			unmarried=i+1;
    		else
    			mark[arr[i][j]]=1;
    	}
    	int free=-1;
    	for(int i=1;i<=N;i++)
    		if(!mark[i])
    			free=i;
    	if(unmarried!=-1 && free!=-1)
    	{
    		cout<<"IMPROVE"<<endl<<unmarried<<" "<<free<<endl;
    	}
    	else
    		cout<<"OPTIMAL"<<endl;
    }
    
}