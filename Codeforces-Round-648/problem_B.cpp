#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;


bool check1(vector<int> &arr)
{
	int i=0;
	while(i+1<arr.size())
	{
		if(arr[i+1]<arr[i])
			return 0;
		i++;
	}
	return 1;
}
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

    	int arr[N],type[N];
    	vector<int> A,B;
    	for(int i=0;i<N;i++)
    		cin>>arr[i];
    	for(int i=0;i<N;i++)
    	{
    		cin>>type[i];
    		if(type[i]==0)
    			A.push_back(arr[i]);
    		else
    			B.push_back(arr[i]);
    	}
    	
    	if(!A.empty() && !B.empty())
    		cout<<"Yes"<<endl;
    	else if(check1(A) && check1(B))
    		cout<<"Yes"<<endl;
    	else
    		cout<<"No"<<endl;

    	
    }
}