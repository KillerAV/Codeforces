#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;


int main() 
{
    int N,K;
    cin>>N>>K;
    string str;
    cin>>str;
    vector<vector<int>> arr;

    int count=0;
    for(int i=0;i<N;i++)
    {
        vector<int> temp;
        for(int j=0;j+1<N;j++)
            if(str[j]=='R' && str[j+1]=='L')
            {
                temp.push_back(j);
                swap(str[j],str[j+1]);
                j++;
                count++;
            }
        if(temp.size()==0)
            break;
        arr.push_back(temp);
    }
    if(K>count || K<arr.size())
    {
        cout<<-1<<endl;
        return 0;
    }

    vector<int> ans[K];
    for(int i=0,j=0;i<arr.size();i++,j++)
    {
        if(j+arr.size()-i==K)
            ans[j]=arr[i];
        else
        {
            int index=0;
            while(index<arr[i].size() && j+arr.size()-i!=K)
            {
                ans[j].push_back(arr[i][index]);
                index++;
                j++;
            }
            if(index<arr[i].size())
            {
                while(index<arr[i].size())
                {
                    ans[j].push_back(arr[i][index]);
                    index++;
                }
            }
            else
                j--;
        }
    }

    for(int i=0;i<K;i++)
    {
        printf("%d ",ans[i].size());
        for(int j=0;j<ans[i].size();j++)
            printf("%d ",ans[i][j]+1);
        printf("\n");
    }
    
}