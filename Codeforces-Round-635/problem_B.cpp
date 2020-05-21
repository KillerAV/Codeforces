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
        int X,N,M;
        cin>>X>>N>>M;
        while(N)
        {
            int newX=X/2+10;
            if(newX>=X)
                break;
            X=newX;
            N--;
        }
        while(M--)
            X-=10;
        
        while(N)
        {
            int newX=X/2+10;
            if(newX>=X)
                break;
            X=newX;
            N--;
        }
        if(X>0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    	
    }
   	
    
}