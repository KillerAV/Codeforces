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
        int N,M;
        cin>>N>>M;
        if(N==1 && M==1)
            cout<<"B"<<endl;

        else if(N>=2 && M>=2)
        {
            cout<<"W";
            for(int i=1;i<M;i++)
                cout<<"B";
            cout<<endl;
            for(int i=0;i<N-1;i++)
            {
                for(int j=0;j<M;j++)
                    cout<<"B";
                cout<<endl;
            }
        }
        else
        {
            if(M>=3)
            {
                cout<<"BWB";
                for(int i=3;i<M;i++)
                    cout<<"B";
                cout<<endl;
            }
            else if(N>=3)
            {
                cout<<"B"<<endl<<"W"<<endl<<"B"<<endl;
                for(int i=3;i<N;i++)
                    cout<<"B"<<endl;
            }
        }
    }
    
}