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
    	int N,A,B;
    	cin>>N>>A>>B;
    	string str;
    	for(int i=0;i<A-B+1;i++)
    		str+='a';
    	for(int i=A-B+1,j=1;i<A;i++,j++)
    		str+=char(j+'a');
    	for(int i=A;i<N;i++)
    		str+=str[i-A];
    	cout<<str<<endl;

    }
   	
    
}