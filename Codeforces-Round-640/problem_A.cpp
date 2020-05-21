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
    	vector<int> ans;
    	int mult=1;
    	while(N)
    	{
    		if(N%10!=0)
    			ans.push_back((N%10)*mult);
    		mult*=10;
    		N/=10;
    	}
    	cout<<ans.size()<<endl;
    	for(int i=0;i<ans.size();i++)
    		cout<<ans[i]<<" ";
    	cout<<endl;
    	
    }
}