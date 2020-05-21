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
    int A[11]={2,3,5,7,11,13,17,19,23,29,31};
    while(T--)
    {
    	int N;
    	cin>>N;
    	int arr[N];
    	for(int i=0;i<N;i++)
    		cin>>arr[i];
 
    	int mark[N];
    	for(int i=0;i<N;i++)
    		mark[i]=0;
    	int ans=0;
    	for(int i=0;i<11;i++)
    	{
    		int count=0;
    		for(int j=0;j<N;j++)
    			if(!mark[j] && arr[j]%A[i]==0)
    			{
    				mark[j]=ans+1;
    				count++;
    			}
    		if(count)
    			ans++;
    	}
    	cout<<ans<<endl;
    	for(int i=0;i<N;i++)
    		cout<<mark[i]<<" ";
    	cout<<endl;
 
 
 
 
    }
    
}