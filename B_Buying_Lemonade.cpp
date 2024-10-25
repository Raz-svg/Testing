// accounting for extra clicks
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i = 0;
    while(i<t)
    {
        long long int n,k;
        cin>>n>>k;
        vector<int>s(n);
        for(int v = 0;v<n;v++)
        {
            cin>>s[v];
        }
        sort(s.begin(),s.end());
        long long int j;
        long long int h=0;
        for(int y = 0;y<n;y++)
        {
            if(s[y]*(n-y)>=k-h)
            {
                j = y;
                break;
            }
            h = h+s[y];

        }
        cout<<j+k<<"\n";

        i++;
    }
}