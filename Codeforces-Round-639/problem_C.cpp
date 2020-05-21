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
    	set<int> S;
    	bool flag=true;
    	for(int i=0;i<N;i++)
    	{
    		int temp;
    		cin>>temp;
    		temp=i+temp;
    		temp%=N;
    		temp=(temp+N)%N;
    		if(S.count(temp))
    			flag=false;
    		S.insert(temp);
    	}
    	if(flag)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    	
    }
}