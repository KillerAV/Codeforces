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
    	int a,b,c,d;
    	cin>>a>>b>>c>>d;
    	int x,y,x1,y1,x2,y2;
    	cin>>x>>y>>x1>>y1>>x2>>y2;
    	int A=b-a;
    	int B=d-c;
    	if(x+A>=x1 && x+A<=x2 && y+B>=y1 && y+B<=y2)
    	{
    		if((A==0 && b>0 && x+1>x2 && x-1<x1) || (B==0 && d>0 && y+1>y2 && y-1<y1))
    			cout<<"No"<<endl;
    		else
    			cout<<"Yes"<<endl;
    	}
    	else
    		cout<<"No"<<endl;
    }
    
}