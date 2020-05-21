#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    T=1;
    while(T--)
    {
        int N;
        cin>>N;
        long long arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        map<long long, int> M;
        M[0]=-1;
        int start=-1;
        long long sum=0,ans=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
            if(!M.count(sum) || M[sum]<start)
                ans+=(i-start);
            else
            {
                ans+=(i-M[sum]-1);
                start=M[sum]+1;
            }
            M[sum]=i;
        }
        cout<<ans<<endl;
    }
    
}