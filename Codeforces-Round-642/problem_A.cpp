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
    	if(N==1)
    		cout<<0<<endl;
    	else if(N==2)
    		cout<<M<<endl;
    	else
    		cout<<2*M<<endl;
        
    }
}