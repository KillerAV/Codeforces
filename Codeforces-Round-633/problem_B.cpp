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
        sort(arr,arr+N);
        int i=0,j=N-1;
        vector<int> ans;
        while(i<=j)
        {
            ans.push_back(arr[i]);
            if(i!=j)
                ans.push_back(arr[j]);
            i++;
            j--;
        }
        for(int i=N-1;i>=0;i--)
            cout<<ans[i]<<" ";
        cout<<endl;
        
    }
    
}