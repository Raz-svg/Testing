// using mapractice
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(n%2==0)
        {
             if(v[n/2-1]==v[0]&&v[n/2]==v[n-1]){
                cout<<"Yes\n";
             }
             else
             {
                 cout<<"No\n";
             }
        }
        else
        {
            if(v[(n+1)/2-1]!=v[0]&&v[(n+1)/2-1]==v[n-1]&&v[(n+1)/2-2]==v[0])
            {
                cout<<"Yes\n";
             }
            else if(v[(n+1)/2-1]==v[0]&&v[(n+1)/2-1]!=v[n-1]&&v[(n+1)/2]==v[n-1])
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
            }
          }
}