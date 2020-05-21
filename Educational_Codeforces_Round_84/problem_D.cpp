#include <bits/stdc++.h>
using namespace std;


bool func(vector<int> &temp, vector<int> &C, int i)
{
	bool S[temp.size()];
	for(int i=0;i<temp.size();i++)
		S[i]=0;
	for(int j=0;j<temp.size();j++)
	{
		int index=j;
		if(S[index])
			continue;
		int c1=C[temp[index]],ans=1;
		while(!S[index])
		{
			if(C[temp[index]]!=c1)
				ans=0;
			S[index]=1;
			index=(index+i)%temp.size();
		}
		if(ans)
			return 1;
	}
	return 0;
}
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
    	vector<int> A(N+1),C(N+1);
    	for(int i=1;i<=N;i++)
    		cin>>A[i];
    	for(int i=1;i<=N;i++)
    		cin>>C[i];

    	int ans=N;
		bool mark[N+1];
		for(int i=1;i<=N;i++)
			mark[i]=0;
		for(int i=1;i<=N;i++)
			if(!mark[i])
			{
				int x=i;
				vector<int> temp;
				while(!mark[x])
				{
					temp.push_back(x);
					mark[x]=1;
					x=A[x];
				}
				x=temp.size();
				for(int i=1;i*i<=x && i<ans;i++)
					if(x%i==0)
					{
						if(func(temp,C,i))
							ans=min(ans,i);
						else if(func(temp,C,x/i))
							ans=min(ans,x/i);
					}
			}
		cout<<ans<<endl;
		
    }


}