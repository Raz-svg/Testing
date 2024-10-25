#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    bool w=false,z=false;
    cin>>t;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    } 
    sort(v.begin(),v.end());  
    a=v[0];
    b=v[n-1];
    if(t==(a+b)/2)
    {
        cout<<"foound";
    }
    else if(t<(a+b)/2)
    {
        
        for(int i=0;i<b;i++)
        {
            if(t==v[i])
            {
                cout<<"found";
                bool z=true;
                a=(a+b)/2+1;
                break;
                
            }
        }
        if(z==false)
        {
            cout<<"-1";
        }
    }
    else{
        
        for(int i=a;i<n;i++)
        {
        
            if(t==v[i])
            {
                cout<<"found";
                bool w=true;
                a=(a+b)/2+1;
                break;
                
            }

        }
        if(w==false)
        {
            cout<<"-1";
        }
    }

}