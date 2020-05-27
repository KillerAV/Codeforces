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

    	int N,M;
    	cin>>N>>M;
    	if(N%2==0 || M%2==0)
    		cout<<N*M/2<<endl;
    	else
    		cout<<min((N/2)*M+(M+1)/2,(M/2)*N+(N+1)/2)<<endl;
    	
    }
}