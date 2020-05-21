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
   		int N,A,B,C,D;
   		cin>>N>>A>>B>>C>>D;
   		if((C-D)<=((A+B)*N) && (C+D)>=((A-B)*N))
   			cout<<"Yes"<<endl;
   		else
   			cout<<"No"<<endl;

   	}
}