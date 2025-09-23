//fibbonnaci number
//MEMOIZATION
#include<bits/stdc++.h>
using namespace std;


int f(int n,vector<int>&dp)
{
    if(n<=1)
    {
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    
    
    
    return dp[n]=f(n-1,dp)+f(n-2,dp);
}




int main()
{
    int n,x;
    cin>>n;
    vector<int> dp(n + 1, -1);
    x=f(n,dp);
    cout<<x;
    return 0;
}
//TABULATION METHOD
int dp[n+1];
dp[0]=0;
dp[1]=1;

for(int i=2;i<=n;i++)
  {
       dp[i]=dp[i-1]+dp[i-2];
  }

