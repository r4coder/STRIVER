//Frog Jump with K Distances

class Solution {
  public:
  
  int frog(int n,vector<int>&dp,vector<int>&height,int k)
  {
      
      if(n==0)
      {
          return 0;
      }

      
      
       if(dp[n]!=-1)
       {
           
           return dp[n];
       }
       int mini=INT_MAX;
       
       
       for(int i=n-1;i<=max(0,n-k);i--)
       {
           dp[i]=frog(i,dp,height,k)+abs(height[i]-height[i-1]);
           mini=min(mini,dp[i]);
           
           
           
           
           
       }
       
       return dp[n]=mini;
       
        
      
  }
  
  
  
  
    int minCost(vector<int>& height) {
        
        int n=height.size()-1;
        vector<int>dp(n+1,-1)
        return frog(n,dp,height,k);
        
        
        
        
        
        
        
        
        
    }
};
