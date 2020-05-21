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
   		int N;
   		cin>>N;
   		int arr[N],pos[N];
   		bool mark[N],ans=true;
   		for(int i=0;i<N;i++)
   		{
   			cin>>arr[i];
   			pos[arr[i]-1]=i;
   			mark[i]=0;
   		}

   		for(int i=0;i<N;)
   		{
   			int curr=pos[i];
   			while(i<N && curr<N && !mark[curr])
   			{
   				mark[curr]=1;
   				curr++;
   				i++;
   				if(i<N && curr<N && !mark[curr] && pos[i]!=curr)
   				{
   					ans=false;
   					break;
   				}

   			}
   			if(!ans)
   				break;
   		}
   		if(ans)
   			cout<<"Yes"<<endl;
   		else
   			cout<<"No"<<endl;


   	}
}