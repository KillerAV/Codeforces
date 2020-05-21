#include <bits/stdc++.h>
#define mod 1000000007
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
        int A[N],B[N];
        for(int i=0;i<N;i++)
            cin>>A[i];
        for(int i=0;i<N;i++)
            cin>>B[i];

        int arr[N][2];
        bool a=false,b=false;
        for(int i=0;i<N;i++)
        {
            arr[i][0]=a;
            arr[i][1]=b;
            if(A[i]<0)
                a=true;
            if(A[i]>0)
                b=true;
        }
        bool ans=true;
        for(int i=N-1;i>=0;i--)
        {
            if(A[i]==B[i])
                continue;
            else if(A[i]<B[i] && !arr[i][1])
            {
                ans=false;
                break;
            }
            else if(A[i]>B[i] && !arr[i][0])
            {
                ans=false;
                break;
            }
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
}