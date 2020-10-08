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
    //cin>>test_case;
    test_case=1;
    while(test_case--)
    {
      int r,c;
      cin>>r>>c;

      string s="";

      for(int i=0;i<=c;i++)
      {
        for(int j=0;j<r;j++)
        s+='U';
        for(int j=0;j<r;j++)
        s+='D';

        s+='R';
      }

      for(int i=0;i<=r+1;i++)
      {
        for(int j=0;j<c;j++)
        s+='L';
        for(int j=0;j<c;j++)
        s+='R';

        s+='U';
      }

      print(s);
    }  
}
