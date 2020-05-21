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
        int ans=0;
        for(int i=1;i<N;i++)
        {
            if(arr[i]>=arr[i-1])
                continue;
            int diff=arr[i-1]-arr[i];
            int it=0;
            while(diff)
            {
                diff/=2;
                it++;
            }
            ans=max(ans,it);
            arr[i]=arr[i-1];
        }
        cout<<ans<<endl;
        
    }
    
}