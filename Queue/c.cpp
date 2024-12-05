#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cse=1;
        int n,k,cnt=0;
        cin>>n>>k;
        int x[n],y[n];
        for(int i=1;i<=n;i++)
        {
            cin>>x[i]>>y[i];
            int ans=k/x[i];
            // cout<<ans<<endl;
            cnt+=ans;
        }
        // cout<<n<<" "<<k<<endl;
        // for(int i=1;i<=n;i++)
        // {
        //     int ans=k/x[i];
        //     // cout<<ans<<endl;
        //     cnt+=ans;
        // }
        cout<<"Case "<<cse<<": "<<cnt<<endl;
        cse++;
    }

    return 0;
}