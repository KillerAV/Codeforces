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
    vector<int> arr;
    for(int i=1;(3*i*i+i)/2<=1000000000;i++)
    	arr.push_back((3*i*i+i)/2);
    while(T--)
    {
    	int N;
    	cin>>N;
    	int count=0;
    	for(int i=arr.size()-1;i>=0;i--)
    		while(arr[i]<=N)
    		{
    			N-=arr[i];
    			count++;
    		}
    	cout<<count<<endl;
    	
    }
}