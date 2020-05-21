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
    	int N,K;
    	cin>>N>>K;
    	int sum=1,i=0;
    	while(K>sum)
    	{
    		K-=sum;
    		sum++;
    		i++;
    	}
    	int j=0;
    	sum=1;
    	while(K>=sum)
    	{
    		K-=sum;
    		j++;
    	}
 
    	string str;
    	for(int x=0;x<N;x++)
    		if(x==i+1 || x==j-1)
    			str+='b';
    		else
    			str+='a';
    	reverse(str.begin(),str.end());
    	cout<<str<<endl;
 
 
    }
}