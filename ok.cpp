#include <bits/stdc++.h>
using namespace std;
int main()
{
    int o;
    cin>>o;
    int i = 0;
    while(i<o)
    {
        //solve here
        int n;
        cin>>n;
        int j,k;
        int c=0;
        int t=0;
        int count_j = 0;
        int count_k = 0;
        for(int m = 0;m<n;m++)
        {
            int v;
            cin>>v;
            if(m==0)
            {
                j=v;
            }
            if(v!=j && c!=1)
            {
                k=v;
                c=1;
            }
            if(v!=j && v!=k)
            {
                t=1;
                
            }
            if(v==j)
            {
                count_j++;
            }
            else if(v==k)
            {
                count_k++;
            }
        }
        if(t==1)
        {
            cout<<"No\n";
        }
        else if(n%2==0)
        {
            if(count_j==count_k || count_j==n || count_k==n)
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
        }
        else
        {
            if(count_j==count_k+1 || count_j==count_k-1 || count_j==n || count_k==n)
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
        }
        i++;
    }
}