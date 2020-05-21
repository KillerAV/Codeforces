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
    	int N;
    	cin>>N;
    	int arr[N];
    	for(int i=0;i<N;i++)
    		cin>>arr[i];
    	int i=1,j=N-1;
    	int totalA=arr[0],totalB=0;
    	int prevA=arr[0],prevB;
    	int a1=1;
    	while(i<=j)
    	{
    		int sum=0;
    		bool move=false;
    		while(j>=i && sum<=prevA)
    		{
    			move=true;
    			sum+=arr[j];
    			j--;
    		}
    		if(move)
    			a1++;
    		prevB=sum;
    		totalB+=sum;
    		sum=0;
    		move=false;
    		while(i<=j && sum<=prevB)
    		{
    			move=true;
    			sum+=arr[i];
    			i++;
    		}
    		if(move)
    			a1++;
    		prevA=sum;
    		totalA+=prevA;
    	}
    	cout<<a1<<" "<<totalA<<" "<<totalB<<endl;
    }
}