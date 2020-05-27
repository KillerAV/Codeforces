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

    	int N;
    	cin>>N;
    	int arr[N];
    	for(int i=0;i<N;i++)
    		cin>>arr[i];
    	sort(arr,arr+N);

    	int curr=1;
    	int count=0;
    	for(int i=0;i<N;i++)
    	{
    		int count=0;
    		while(i<N && arr[i]>curr+count)
    		{
    			count++;
    			i++;
    		}
    		if(i<N)
    			curr+=count+1;
    	}
    	cout<<curr<<endl;
    	
    }
}