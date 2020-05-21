#include <bits/stdc++.h>
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
    	string str;
    	cin>>str;
    	string a,b;
    	a+="1";
    	b+="1";
    	int i=1;
    	while(i<N && (str[i]=='2' || str[i]=='0'))
    	{
    		if(str[i]=='2')
    		{
    			a+="1";
    			b+="1";
    		}
    		else
    		{
    			a+="0";
    			b+="0";
    		}
    		i++;
    	}
    	if(i<N)
    	{
    		a+="1";
    		b+="0";
    		i++;
    		while(i<N)
    		{
    			if(str[i]=='1')
    			{
    				a+="0";
    				b+="1";
    			}
    			else if(str[i]=='2')
    			{
    				a+="0";
    				b+="2";
 
    			}
    			else
    			{
    				a+="0";
    				b+="0";
    			}
    			i++;
    		}
    	}
    	cout<<a<<endl<<b<<endl;
    }
}