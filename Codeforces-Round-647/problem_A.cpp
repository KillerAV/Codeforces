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
    	long long A,B;
    	cin>>A>>B;
    	int ans=0;
    	while(A*8<=B)
    	{
    		A*=8;
    		ans++;
    	}
    	while(A*4<=B)
    	{
    		A*=4;
    		ans++;
    	}
    	while(A*2<=B)
    	{
    		A*=2;
    		ans++;
    	}
    	while(A%8==0 && A/8>=B)
    	{
    		A/=8;
    		ans++;
    	}
    	while(A%4==0 && A/4>=B)
    	{
    		A/=4;
    		ans++;

    	}
    	while(A%2==0 && A/2>=B)
    	{
    		A/=2;
    		ans++;
    	}
    	if(A!=B)
    		ans=-1;
    	cout<<ans<<endl;


    	
    	
    }
}