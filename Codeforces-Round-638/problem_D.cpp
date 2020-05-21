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
   		ll N;
   		cin>>N;
   		ll mult=1;
		vector<int> arr;
		ll sum=1;
		while(sum<N)
		{
			arr.push_back(mult);
			mult*=2;
			sum+=mult;
		}
		cout<<arr.size()<<endl;
		if(arr.size()!=0)
		{
			ll upper=sum,lower=sum-arr[arr.size()-1];
			if(lower>N)
			{
				ll diff=lower-N;
				ll sub=(diff+1)/2;
				if(sub)
				{
					arr[arr.size()-2]-=sub;
					lower-=sub*2;
				}
			}
			arr[arr.size()-1]=N-lower;
			for(int i=0;i<arr.size();i++)
				cout<<arr[i]<<" ";
			cout<<endl;
		}


   	}
}