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
        int minprime[500001];
        for(int i=0;i<=500000;i++)
            minprime[i]=0;
        minprime[0]=minprime[1]=1;
        for(int i=2;i*i<=500000;i++)
            if(!minprime[i])
                for(int j=i*i;j<=500000;j+=i)
                    if(!minprime[j])
                        minprime[j]=i;
        
        for(int i=2;i<=500000;i++)
            if(!minprime[i])
                minprime[i]=i;

        cin>>N;
        pair<int,int> gcd[N];
        for(int i=1;i<=N;i++)
        {
            int x=i;
            int t=x/minprime[x];
            gcd[i-1]={t,i};
        }
        sort(gcd,gcd+N);
        for(int i=1;i<N;i++)
            cout<<gcd[i].first<<" ";
        cout<<endl;



    }
    
}