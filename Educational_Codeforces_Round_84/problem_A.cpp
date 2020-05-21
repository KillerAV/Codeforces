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
    	long long N,K;
    	cin>>N>>K;
    	if(N%2!=K%2 || K*K>N)
    		cout<<"NO"<<endl;
    	else
    		cout<<"YES"<<endl;
    }
    
}