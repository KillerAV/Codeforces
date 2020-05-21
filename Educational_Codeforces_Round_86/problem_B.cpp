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
   		int c1=0,c2=0;
   		for(int i=0;i<str.size();i++)
   			if(str[i]=='0')
   				c1++;
   			else
   				c2++;
   		if(c1==0 || c2==0)
   		{
   			cout<<str<<endl;
   			continue;
   		}
   		for(int i=0;i<2*str.size();i++)
   			if(i%2==0)
   				cout<<1;
   			else
   				cout<<0;
   		cout<<endl;

   	}
}