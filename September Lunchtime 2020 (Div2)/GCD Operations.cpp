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
        int n,temp;
        cin>>n;
        //vector<int> incorrect;
        int flag=true;
        for(int i=1;i<=n;i++)
        {   
            cin>>temp;
            if(i!=temp)
            {
                if(__gcd(i,temp)!=temp)
                {
                    //print(__gcd(i,temp));
                    flag=false;
                }
            }
        }
        if(flag)
        print("YES");
        else
        print("NO");
    }
}
