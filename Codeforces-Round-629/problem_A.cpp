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
    	long long a,b;
    	cin>>a>>b;
    	cout<<int(ceil(double(a)/b)*b-a)<<endl;
    }
}