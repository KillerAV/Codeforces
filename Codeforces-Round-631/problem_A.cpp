#include <bits/stdc++.h>
#define mod 1000000007
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
    	int N,X;
    	cin>>N>>X;
    	int arr[205]={0};
    	for(int i=0;i<N;i++)
    	{
    		int temp;
    		cin>>temp;
    		arr[temp]=1;
    	}
    	int ans=0;
 		for(int i=1;i<=204;i++,ans++)
 			if(arr[i]==0)
 				if(X>0)
 					X--;
 				else
 					break;
 		cout<<ans<<endl;
    }
}