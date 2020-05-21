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
    	int N,K;
    	cin>>N>>K;
    	int A[N],B[N];
    	int sum=0;
    	for(int i=0;i<N;i++)
    	{
    		cin>>A[i];
    		sum+=A[i];
    	}
    	for(int i=0;i<N;i++)
    		cin>>B[i];
    	sort(A,A+N);
    	sort(B,B+N);

    	int i=0,j=N-1;
    	while(K-- && i<N && j>=0)
    	{
    		if(A[i]<B[j])
    			sum+=B[j]-A[i];
    		else
    			break;
    		i++;
    		j--;
    	}
    	cout<<sum<<endl;
        
    }
}