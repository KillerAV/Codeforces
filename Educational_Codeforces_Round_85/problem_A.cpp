#include <bits/stdc++.h>
#define mod 1000000007
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

    	int pa=0,pb=0;
    	bool flag=1;
    	for(int i=0;i<N;i++)
    	{
    		int a,b;
    		cin>>a>>b;
    		int diffa=a-pa, diffb=b-pb;
    		if(a>=pa && b>=pb && a>=b && diffa>=diffb)
    		{
    			pa=a;
    			pb=b;
    		}
    		else
    			flag=false;
    	}
    	if(flag)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    	
    }
    
}