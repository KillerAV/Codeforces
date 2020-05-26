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
    	int A,B;
    	cin>>A>>B;
    	int X=min(A,B),Y=max(A,B);
    	int ans=max(X+X,Y)*max(X+X,Y);

    	cout<<ans<<endl;
    	
    }
}