#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

ll M[1000001]={0};
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    int N=C-A+1;
    int limit=min(B-A+1,C-B+1);
    int i=A+B;
    for(int j=1;j<=limit;j++,i++)
    	M[i]=j;
    int extra=N-2*limit+1;
    while(extra--)
    {
    	M[i]=limit;
    	i++;
    }
    limit--;
    while(limit>=1)
    {
    	M[i]=limit;
    	limit--;
    	i++;
    }
   

    ll sum=0;
    for(int i=1000000;i>=0;i--)
    {
    	int temp=M[i];
    	M[i]=sum;
    	sum+=temp;
    }

    ll ans=0;
    for(int i=C;i<=D;i++)
    	ans+=M[i];
    cout<<ans<<endl;


}