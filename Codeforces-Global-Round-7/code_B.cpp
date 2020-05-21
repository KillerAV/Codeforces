#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    T=1;
    while(T--)
    {
    	int N;
    	cin>>N;
    	int arr[N];
    	for(int i=0;i<N;i++)
    		cin>>arr[i];
    	int maxTill=0;
    	for(int i=0;i<N;i++)
    	{
    		cout<<arr[i]+maxTill<<" ";
    		maxTill=max(maxTill,arr[i]+maxTill);
    	}
    	cout<<endl;
    }
    
}