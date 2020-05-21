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
    	if(N==1)
    	{
    		cout<<-1<<endl;
    		continue;
    	}
    	if((2*(N-1)+3)%3!=0)
    	{
    		for(int i=0;i<N-1;i++)
    			cout<<2;
    		cout<<3<<endl;
    	}
    	else
    	{
    		for(int i=0;i<N-2;i++)
    			cout<<2;
    		cout<<3<<3<<endl;
    	}
    }
    
}