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
    	int N1,N2,N3;
    	cin>>N1>>N2>>N3;
    	string ans;
    	if(N1==0 && N2==0)
    	{
    		for(int i=0;i<N3+1;i++)
    			ans+='1';
    	}
    	else if(N1==0 && N3==0)
    	{
    		for(int i=0,j=0;i<N2+1;i++,j=1-j)
    			ans+='0'+j;
    	}
    	else if(N2==0 && N3==0)
    	{
    		for(int i=0;i<N1+1;i++)
    			ans+='0';
    	}
    	else if(N1==0)
    	{
    		for(int i=0;i<N3+1;i++)
    			ans+='1';
    		for(int i=0,j=0;i<N2;i++,j=1-j)
    			ans+='0'+j;
    	}
    	else if(N3==0)
    	{
    		for(int i=0;i<N1+1;i++)
    			ans+='0';
		    for(int i=0,j=1;i<N2;i++,j=1-j)
		    	ans+='0'+j;
    	}
    	else
    	{
    		if(N2%2!=0)
    		{
    			for(int i=0;i<N3+1;i++)
    				ans+='1';
		    	for(int i=0,j=0;i<N2;i++,j=1-j)
		    		ans+='0'+j;
		    	for(int i=0;i<N1;i++)
		    		ans+='0';
		    }
		    else
		    {
		    	for(int i=0,j=0;i<N2;i++,j=1-j)
		    		ans+='0'+j;
		    	for(int i=0;i<N3;i++)
		    		ans+='1';
		    	for(int i=0;i<N1+1;i++)
		    		ans+='0';
		    }
	    }
    	cout<<ans<<endl;
    }
}