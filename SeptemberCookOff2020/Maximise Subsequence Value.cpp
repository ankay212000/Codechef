#include<bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define N 100000
#define mod 1000000007
 
template <typename T>
void print(T x){cout<<x<<"\n";}
template <typename T1, typename T2>
void print2(T1 x,T2 y){cout<<x<<" "<<y<<"\n";}
template <typename T1, typename T2,typename T3>
void print3(T1 x, T2 y,T3 z){cout<<x<<" "<<y<<" "<<z<<"\n";}

int main()
{
    io;
    ll test_case;
    cin>>test_case;
    //test_case=1;
    while(test_case--)
    {
        ll n;
        cin>>n;
        ll arr[n],sum=0;
        ll pos=0;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            if(arr[i]>=0)
            {
                pos++;
                sum+=arr[i];
            }    
        }

        vector<ll> ans;
        for(int i=1;i<=pos;i++)
        if(arr[i]<0) ans.push_back(i);
        for(int i=pos+1;i<=n;i++) 
        if(arr[i]>=0) ans.push_back(i);

        cout<<sum<<"\n";
        cout<<ans.size()<<" ";
        for(auto x: ans) cout<<x<<" ";
        cout<<"\n";
    }
}
