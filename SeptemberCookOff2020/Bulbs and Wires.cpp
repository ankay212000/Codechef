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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> side,smid,nums;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            nums.push_back(i);
        }    
        if(nums.size()==n-1)
        {
            cout<<0<<"\n";
            continue;
        }    
        if(nums.size()==0)
        {
            cout<<0<<"\n";
            continue;
        }    
        if(nums[0]!=0)
        side.push_back(nums[0]);
        if(nums[nums.size()-1]!=n-1)
        side.push_back(n-1-nums[nums.size()-1]);

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]!=1)
            smid.push_back(nums[i]-nums[i-1]-1);
        }

        sort(smid.begin(),smid.end(),greater<int>());
        sort(side.begin(),side.end(),greater<int>());

        int total=0;
        for(int i=0;i<smid.size();i++)
        total+=smid[i];
        for(int i=0;i<side.size();i++)
        total+=side[i];

        if(k==0)
        {
            cout<<total<<"\n";
            continue;
        }
        int sum=0,i=0,j=0;
        if(k%2!=0)
        {
            if(side.size()!=0)
            sum+=side[i],i++,k--;
        }    

        for(j=0;j<smid.size();j++)
        {
            if(k>2)
            {
                sum+=smid[j];
                k-=2;
            }
            else
            break;
        }
        
        if(k>=2)
        {
            int net=0;
            while(i<side.size())
            net+=side[i],i++;

            if(j<smid.size())
                sum+=max(net,smid[j]);
            else
                sum+=net;
        }

        cout<<total-sum<<"\n";
    }
}
