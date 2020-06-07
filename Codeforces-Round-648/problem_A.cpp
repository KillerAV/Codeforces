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
    	int arr[N][M],row[N],col[M];
    	for(int i=0;i<N;i++)
    		row[i]=0;
    	for(int i=0;i<M;i++)
    		col[i]=0;
    	for(int i=0;i<N;i++)
    		for(int j=0;j<M;j++)
    		{
    			cin>>arr[i][j];
    			if(arr[i][j]==1)
    			{
    				row[i]=1;
    				col[j]=1;
    			}
    		}

    	int count=0;
    	for(int i=0;i<N;i++)
    		for(int j=0;j<M;j++)
    			if(!row[i] && !col[j] && arr[i][j]==0)
    			{
    				row[i]=1;
    				col[j]=1;
    				count++;
    			}
    	if(count%2!=0)
    		cout<<"Ashish"<<endl;
    	else
    		cout<<"Vivek"<<endl;

    	
    }
}