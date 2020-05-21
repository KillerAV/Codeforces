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
    	int groups=0;
    	for(int i=0;i<N;i++)
    	{
    		int count=1;
    		while(i<N && count<arr[i])
    		{
    			count++;
    			i++;
    		}
    		if(i!=N)
    			groups++;
    	}
    	cout<<groups<<endl;
    }
}