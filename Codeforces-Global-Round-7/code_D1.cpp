#include <bits/stdc++.h>
#define M 998244353
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

    	int N=str.size();
    	bool palin=true;
    	for(int i=0,j=N-1;i<j;i++,j--)
    		if(str[i]!=str[j])
    		{
    			palin=false;
    			break;
    		}
    	if(palin)
    	{
    		cout<<str<<endl;
    		continue;
    	}
    	string ans;
    	for(int i=0;i<N;i++)
    	{
    		int l=i,r=i;
    		while(l>=0 && r<N && str[l]==str[r])
    		{
    			l--;
    			r++;
    		}
    		string temp;
    		for(int i=l+1;i<r;i++)
    			temp+=str[i];

    		string x;
    		for(int i=N-1,j=0;j<=l && i>=r;j++,i--)
    			x+=str[i];
    		string y;
    		for(int i=0;i<=l;i++)
    			y+=str[i];

    		if(y==x)
    		{
    			reverse(x.begin(),x.end());
    			temp=y+temp+x;
    			if(temp.size()>ans.size())
    				ans=temp;
    		}

    		x.clear();
    		y.clear();
    		for(int i=N-1,j=0;j<N-1-r+1 && i>=r;j++,i--)
    			x+=str[i];
    		for(int i=0;i<N-1-r+1 && i<=l;i++)
    			y+=str[i];

    		if(y==x)
    		{
    			reverse(x.begin(),x.end());
    			temp=y+temp+x;
    			if(temp.size()>ans.size())
    				ans=temp;
    		}
    		

    		temp.clear();
    		x.clear();
    		y.clear();

    		l=i-1;r=i;
    		while(l>=0 && r<N && str[l]==str[r])
    		{
    			l--;
    			r++;
    		}
    		for(int i=l+1;i<r;i++)
    			temp+=str[i];

    		for(int i=N-1,j=0;j<=l && i>=r;j++,i--)
    			x+=str[i];
    		for(int i=0;i<=l;i++)
    			y+=str[i];

    		if(y==x)
    		{
    			reverse(x.begin(),x.end());
    			temp=y+temp+x;
    			if(temp.size()>ans.size())
    				ans=temp;
    		}

    		x.clear();
    		y.clear();
    		for(int i=N-1,j=0;j<N-1-r+1 && i>=r;j++,i--)
    			x+=str[i];
    		for(int i=0;i<N-1-r+1 && i<=l;i++)
    			y+=str[i];

    		if(y==x)
    		{
    			reverse(x.begin(),x.end());
    			temp=y+temp+x;
    			if(temp.size()>ans.size())
    				ans=temp;
    		}

    	}
    	cout<<ans<<endl;
    }
    
}