#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

class mycompare{ 
public:
	bool operator()(pair<int,int> A, pair<int,int> B) 
    { 
        int sa=A.second-A.first+1;
        int sb=B.second-B.first+1;
        bool f=0;
        if(sa>sb)
        	return f;
        else if(sa<sb)
        	return !f;
        else
        	if(A.first<B.first)
        		return f;
        	else
        		return !f;  
    } 
};
int main() 
{
    
    int T;
    scanf("%d",&T);
    while(T--)
    {
    	int N;
    	scanf("%d",&N);
    	
    	priority_queue<pair<int,int>,vector<pair<int,int>>,mycompare> Q;
    	Q.push({0,N-1});
    	int ans[N];
    	int i=1;
    	while(!Q.empty())
    	{
    		pair<int,int> temp=Q.top();
    		Q.pop();
    		int s=temp.first,e=temp.second;

    		int mid=(s+e)/2;
    		ans[mid]=i;
    		if(s<=mid-1)
    			Q.push({s,mid-1});
    		if(mid+1<=e)
    			Q.push({mid+1,e});
    		i++;
    	}
    	for(int i=0;i<N;i++)
    		printf("%d ",ans[i]);
    	printf("\n");
    	
        
    }
}