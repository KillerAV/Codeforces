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
   		long long X,Y,A,B;
   		cin>>X>>Y>>A>>B;
   		if(X>Y)
   			swap(X,Y);
   		long long ans1=A*(Y-X)+B*X;
   		long long ans2=A*(X+Y);
   		cout<<min(ans1,ans2)<<endl;

   	}
}