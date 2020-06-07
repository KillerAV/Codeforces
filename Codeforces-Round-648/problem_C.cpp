#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin>>N;
    int A[N],B[N];
    int posA[N+1],posB[N+1];
    for(int i=0;i<N;i++)
    {
    	cin>>A[i];
    	posA[A[i]]=i;
    }
    for(int i=0;i<N;i++)
    {
    	cin>>B[i];
    	posB[B[i]]=i;
    }

    int ans=0;
    map<int,int> M;

    for(int i=0;i<N;i++)
    {
    	int pos=posB[A[i]];
    	M[(pos-i+N)%N]++;
    	ans=max(ans,M[(pos-i+N)%N]);
    }
    M.clear();
    for(int i=0;i<N;i++)
    {
    	int pos=posA[B[i]];
    	M[(pos-i+N)%N]++;
    	ans=max(ans,M[(pos-i+N)%N]);

    }
    
    cout<<ans<<endl;
}