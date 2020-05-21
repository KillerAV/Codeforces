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
    	long long N,X;
    	cin>>N>>X;
    	long long arr[N];
    	for(int i=0;i<N;i++)
    		cin>>arr[i];
    	sort(arr,arr+N,greater<long long>());
    	int i=0,j=0;

    	while(j<N && arr[j]>=X)
    		j++;

    	long long sum=0;
    	long long count=0;
    	while(i<j)
    	{
    		sum+=arr[i];
    		count++;
    		i++;
    	}
    	while(j<N && sum+arr[j]>=X*(count+1))
    	{
    		count++;
    		sum+=arr[j];
    		j++;
    	}
    	cout<<count<<endl;

   
    	
    }
    
}