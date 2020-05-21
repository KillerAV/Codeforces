#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N,S;
    cin>>N>>S;
    int arr[N];
    for(int i=0;i<N-1;i++)
    	arr[i]=1;
    arr[N-1]=S-(N-1);

    int ans=-1;
    for(int i=N;i<S-(N-1);i++)
    	if(S-i>=N && S-i<S-(N-1))
    	{
    		ans=i;
    		break;
    	}
    if(ans!=-1)
    {
    	cout<<"YES"<<endl;
    	for(int i=0;i<N;i++)
    		cout<<arr[i]<<" ";
    	cout<<endl<<ans<<endl;
    }
    else
    	cout<<"NO"<<endl;
}