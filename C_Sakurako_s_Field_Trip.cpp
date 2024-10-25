#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        int count=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }   
        for(int j=1;j<n;j=j+2)
        
        {
            if(v[j]==v[j-1]&& v[j]==v[j+1])
            {
               count++;
            }
         }
}