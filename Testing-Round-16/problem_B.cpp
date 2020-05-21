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
    	int A,B,C,D;
    	cin>>A>>B>>C>>D;
    	if(A==C)
    	{
    		if(A==B+D)
    		{
    			cout<<"YES"<<endl;
    			continue;
    		}
    	}
    	if(A==D)
    	{
    		if(A==B+C)
    		{
    			cout<<"YES"<<endl;
    			continue;
    		}
    	}
    	if(B==C)
    	{
    		if(B==A+D)
    		{
    			cout<<"YES"<<endl;
    			continue;
    		}
    	}
    	if(B==D)
    	{
    		if(B==A+C)
    		{
    			cout<<"YES"<<endl;
    			continue;
    		}
    	}
    	cout<<"NO"<<endl;
    	
    }
}