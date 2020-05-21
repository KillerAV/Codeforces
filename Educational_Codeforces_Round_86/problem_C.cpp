#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;


long long func(ll lcm, ll B, ll N)
{
	ll x=N/lcm;
	ll ans=x*B;
	ll y=N/lcm*lcm;
	int count=0;
	while(y<=N && count<B)
	{
		count++;
		y++;
		ans++;
	}
	return ans;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   	int T;
   	cin>>T;
   	while(T--)
   	{
   		int A,B,Q;
   		cin>>A>>B>>Q;
   		if(A>B)
   			swap(A,B);
   		long long lcm=A*B/__gcd(A,B);
   		while(Q--)
   		{
   			long long L,R;
   			cin>>L>>R;

   			long long X=func(lcm,B,R)-func(lcm,B,L-1);
   			cout<<R-L+1-X<<" ";
   		}
   		cout<<endl;
   	}
}