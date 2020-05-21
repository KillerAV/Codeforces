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
    	ll N,K;
    	cin>>N>>K;
    	ll temp=(K/(N-1))*N+K%(N-1);
    	if(temp%N==0)
    		temp--;
    	cout<<temp<<endl;
    }
}