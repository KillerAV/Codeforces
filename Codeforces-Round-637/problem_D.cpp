#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

string ans="-1";


string number[10]={"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
int get(string str, int N)
{
	int count=0;
	for(int i=0;i<7;i++)
		if(number[N][i]=='0' && str[i]=='1')
			return -1;
		else if(number[N][i]=='1' && str[i]=='0')
			count++;
	return count;
}

int dp[2000][2001];
bool func(string *arr, string &str, int N, int K, int i=0)
{
	if(K<0)
		return 0;
	if(i==N)
	{
		if(K==0)
		{
			ans=str;
			return 1;
		}
		return 0;
	}

	if(dp[i][K]!=-1)
		return dp[i][K];

	for(int j=9;j>=0;j--)
	{
		int req=get(arr[i],j);
		str+=char(j+'0');
		if(req!=-1 && func(arr,str,N,K-req,i+1))
		{
			dp[i][K]=1;
			return true;
		}
		str.pop_back();
	}
	dp[i][K]=0;
	return false;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   	int N,K;
   	cin>>N>>K;
   	string arr[N];
   	for(int i=0;i<N;i++)
   		cin>>arr[i];

   	for(int i=0;i<N;i++)
   		for(int j=0;j<=K;j++)
   			dp[i][j]=-1;
   	string str;
   	func(arr,str,N,K);

   	cout<<ans<<endl;

}