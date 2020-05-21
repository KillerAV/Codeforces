#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
 
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int K;
    cin>>K;
    int bits=0;
    int temp=K,mult=1,opposite=0;
    while(temp)
    {
    	if(temp%2==0)
    		opposite+=mult;
    	mult*=2;
    	bits++;
    	temp/=2;
    }
    opposite+=mult;
    int highest = (1<<(bits+1))-1;
   	
 
   	cout<<3<<" "<<3<<endl;
   	cout<<highest<<" "<<highest<<" "<<highest<<endl;
   	cout<<K<<" "<<opposite<<" "<<opposite<<endl;
   	cout<<K<<" "<<highest<<" "<<K<<endl;
    
}
