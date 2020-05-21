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
    	string str;
    	cin>>str;
    	set<pair<pair<int,int>,pair<int,int>>> S;
    	int x=0,y=0;
    	int ans=0;
    	for(int i=0;i<str.size();i++)
    	{
    		int nextx=x,nexty=y;
    		if(str[i]=='N')
    			nextx--;
    		else if(str[i]=='S')
    			nextx++;
    		else if(str[i]=='E')
    			nexty--;
    		else
    			nexty++;
    		if(S.count({{x,y},{nextx,nexty}}))
    			ans++;
    		else
    		{
    			ans+=5;
    			S.insert({{x,y},{nextx,nexty}});
    			S.insert({{nextx,nexty},{x,y}});
    		}
    		x=nextx;
    		y=nexty;
    	}
    	cout<<ans<<endl;
    	
    }
}