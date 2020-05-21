#include <bits/stdc++.h>
#define M 998244353
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    
    int T;
    T=1;
    while(T--)
    {
    	int N;
    	cin>>N;
    	vector<long long> arr(N);
    	arr[0]=10;
    	long long sum=10,mult=90;
    	for(int i=1;i<N;i++,mult=(mult*10)%M)
    	{
    		arr[i]=(mult+(sum*9)%M)%M;
    		sum=(sum+arr[i])%M;
    	}
    	for(int i=N-1;i>=0;i--)
    		cout<<arr[i]<<" ";
    	cout<<endl;
 
    }
    
}