#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;


int main() 
{
	int T;
    scanf("%d", &T);
    while(T--)
    {
    	int N;
    	scanf("%d", &N);
    	int arr[N],count[200]={0};
    	for(int i=0;i<N;i++)
    	{
    		scanf("%d", &arr[i]);
    		count[arr[i]-1]++;
    	}
    	int ans=0;
    	for(int i=0;i<200;i++)
    		ans=max(ans,count[i]);
    	

    	for(int x=1;x<=200;x++)
    	{
    		vector<int> temp;
    		for(int j=0;j<N;j++)
    			if(arr[j]==x)
    				temp.push_back(j);

    		int i=temp.size()/2-1,j=temp.size()/2+1;
    		if(int(temp.size())%2==0)
    			j--;

    		int count[200]={0};
    		int maxFreq=0;
    		if(i>=0 && j<temp.size())
    		{	
    			for(int k=temp[i]+1;k<temp[j];k++)
    			{
    				count[arr[k]-1]++;
    				maxFreq=max(maxFreq,count[arr[k]-1]);
    			}
    		}	
    		while(i>=0 && j<temp.size())
    		{

    			ans=max(ans,2*(i+1)+maxFreq);
    			int prevI=i,prevJ=j;
    			i--;
    			j++;
    			if(i>=0 && j<temp.size())
    			{
    				for(int k=temp[i]+1;k<temp[prevI];k++)
    				{
    					count[arr[k]-1]++;
    					maxFreq=max(maxFreq,count[arr[k]-1]);
    				}
    				for(int k=temp[prevJ]+1;k<temp[j];k++)
    				{
    					count[arr[k]-1]++;
    					maxFreq=max(maxFreq,count[arr[k]-1]);
    				}
    			}
    		}
    	}
    	printf("%d\n", ans);

    }
   	
    
}