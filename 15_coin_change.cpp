#include<bits/stdc++.h>
using namespace std;
vector<int>v{1,2,3};
int s=100;
int n=v.size()+1;
int m=s+1;
vector<vector<int>>dp(n,vector<int>(m,-1));
int f(int n,int s)
{ 
    if(s==0)
    {
        return 1;
    }
    else if(       (n<0 && s!=0)||(s<0)           )
    {
        return 0;
    }
    else if(dp[n][s]!=INT_MIN)
    {
        return dp[n][s];
    }
    else if(s<v[n])
    {
        return dp[n][s]= f(n-1,s);
    }
    else
    {
        return dp[n][s]=f(n-1,s)+f(n,s-v[n]);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cout<<f(v.size()-1,s);
    return 0;
}