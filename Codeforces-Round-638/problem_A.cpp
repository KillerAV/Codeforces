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
   		ll sum=0;
   		for(int i=1;i<N/2;i++)
   			sum+=(1ll<<i);
   		sum+=(1ll<<N);
   		for(int i=N/2;i<N;i++)
   			sum-=(1ll<<i);
   		cout<<abs(sum)<<endl;
   		
   	}
}