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
        int N,M,O;
        cin>>N>>M>>O;
        long long A[N],B[M],C[O];
        for(int i=0;i<N;i++)
            cin>>A[i];
        for(int i=0;i<M;i++)
            cin>>B[i];
        for(int i=0;i<O;i++)
            cin>>C[i];

        sort(A,A+N);
        sort(B,B+M);
        sort(C,C+O);
        int i=0,j=0,k=0;
        long long ans=5000000000000000000;
        while(i<N && j<M && k<O)
        {
            long long x=A[i],y=B[j],z=C[k];
            ans=min(ans,(x-y)*(x-y)+(y-z)*(y-z)+(x-z)*(x-z));
            long long a=5000000000000000000,b=5000000000000000000,c=5000000000000000000;
            if(i+1<N)
                a=(A[i+1]-y)*(A[i+1]-y)-(x-y)*(x-y)+(A[i+1]-z)*(A[i+1]-z)-(x-z)*(x-z);
            if(j+1<M)
                b=(B[j+1]-x)*(B[j+1]-x)-(x-y)*(x-y)+(B[j+1]-z)*(B[j+1]-z)-(y-z)*(y-z);
            if(k+1<O)
                c=(C[k+1]-y)*(C[k+1]-y)-(z-y)*(z-y)+(C[k+1]-x)*(C[k+1]-x)-(x-z)*(x-z);

            if(a<=b && a<=c)
                i++;
            else if(b<=a && b<=c)
                j++;
            else
                k++;
        }
        cout<<ans<<endl;

    	
    }
   	
    
}