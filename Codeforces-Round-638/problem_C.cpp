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
   		string str;
   		cin>>str;
   		map<int,int> M;
   		for(int i=0;i<N;i++)
   			M[str[i]-'a']++;

   		auto it=M.begin();
   			int count=it->second;
   			while(count<K)
   			{
   				it++;
   				count+=it->second;
   			}
   			if(it!=M.begin())
   				cout<<char(it->first+'a')<<endl;
   			else
   			{
   				string ans;
   				sort(str.begin(),str.end());
   				ans+=str[0];
   				if(str[K]==str[N-1])
   				{
   					for(int i=K;i<N;i+=K)
   						ans+=str[i];
   				}
   				else
   				{
	   				for(int i=K;i<N;i++)
	   					ans+=str[i];
	   			}
	   			cout<<ans<<endl;
   			}

   		
   		
   	}
}