#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,last_diff,max_diff,l;
        cin>>n>>l;
        vector<int>b(n+1);
        vector<int>diff(n);
        b[0]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>b[i];
        }
        last_diff=l-b[n];
        for(int j=0;j<n;j++)
        {
           diff.push_back(b[j+1]-b[j]); 
        }
        sort(diff.begin(),diff.end(),greater<int>());
        max_diff=diff[0];
        if(max_diff>2*last_diff)
        {
            cout<<max_diff<<endl;
        }
        else{
            cout<<2*last_diff<<endl;
        }


        

    }
}