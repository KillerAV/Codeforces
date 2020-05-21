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
    	int arr[N];
    	for(int i=0;i<N;i++)
    		cin>>arr[i];
    	int ans[N];
    	ans[0]=1;
    	int number=1;
    	int option=0;
    	for(int i=1;i<N-1;i++)
    	{
    		if(arr[i]==arr[i-1])
    		{
    			option=1;
    			ans[i]=ans[i-1];
    		}
    		else
    		{
    			if(ans[i-1]==1)
    				ans[i]=2;
    			else
    				ans[i]=1;
    			number=2;
    		}
    	}
 
    	if(arr[N-1]==arr[N-2] && arr[N-1]==arr[0])
    		ans[N-1]=ans[0];
    	else if(arr[N-1]==arr[0])
    		if(ans[N-2]==1)
    			ans[N-1]=2;
    		else
    			ans[N-1]=1;
    	else if(arr[N-1]==arr[N-2])
    		ans[N-1]=2;
    	else if(ans[N-2]==ans[0])
    		ans[N-1]=2;
    	else if(option)
    	{
    		int j=N-3;
    		ans[N-2]=ans[0];
    		while(j>=0 && arr[j]!=arr[j+1])
    		{
    			if(ans[j+1]==1)
    				ans[j]=2;
    			else
    				ans[j]=1;
    			j--;
    		}
    		ans[N-1]=2;
    	}
    	else
    	{
    		number=3;
    		ans[N-1]=3;
    	}
    	set<int> S;
    	for(int i=0;i<N;i++)
    		S.insert(ans[i]);
    	cout<<S.size()<<endl;
    	for(int i=0;i<N;i++)
    		cout<<ans[i]<<" ";
    	cout<<endl;
 
 
    }
}