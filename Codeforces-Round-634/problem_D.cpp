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
    	string arr[9];
    	for(int i=0;i<9;i++)
    		cin>>arr[i];
    	for(int i=0;i<9;)
    	{
    		int start=i/3;
    		//cout<<start<<" ";
    		while(start<9)
    		{
    			if(arr[i][start]!='9')
    				arr[i][start]++;
    			else
    				arr[i][start]='1';
    			i++;
    			start+=3;
    		}
    	}
    	for(int i=0;i<9;i++)
    		cout<<arr[i]<<endl;


    }
   	
    
}