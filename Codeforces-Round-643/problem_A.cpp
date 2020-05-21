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
    	long long A,K;
    	cin>>A>>K;
    	vector<ll> arr;
    	ll size=0;
    	while(size<K)
    	{
    		arr.push_back(A);
    		ll minDigit=10,maxDigit=0;
    		ll x=A;
    		while(x)
    		{
    			minDigit=min(minDigit,x%10);
    			maxDigit=max(maxDigit,x%10);
    			x/=10;
    		}
    		ll newA = A+maxDigit*minDigit;
    		if(newA==A)
    			break;
    		A=newA;
    		size++;
    	}
    	K=min(K-1,size);
    	cout<<arr[K]<<endl;
    }
}