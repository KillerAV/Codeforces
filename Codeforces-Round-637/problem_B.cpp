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
   		int arr[N];
   		for(int i=0;i<N;i++)
   			cin>>arr[i];
   		int count[N];
   		count[0]=0;
   		for(int i=1;i+1<N;i++)
   		{
   			count[i]=count[i-1];
   			if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
   				count[i]++;
   		}
   		count[N-1]=count[N-2];

   		int maxBreaks=0,start=1;
   		for(int i=0;i+K-1<N;i++)
   		{
   			int breaks=count[i+K-2]-count[i];
   			if(breaks>maxBreaks)
   			{
   				maxBreaks=breaks;
   				start=i+1;
   			}

   		}
   		cout<<maxBreaks+1<<" "<<start<<endl;


   	}
}