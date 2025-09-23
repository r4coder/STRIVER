//frog jumps

class Solution {
  public:
  
  int frog(int n,vector<int>&dp,vector<int>&height)
  {
      
      if(n==0)
      {
          return 0;
      }

      
      
       if(dp[n]!=-1)
       {
           
           return dp[n];
       }
       
       int cost1=frog(n-1,dp,height)+abs(height[n]-height[n-1]);
       int cost2=INT_MAX;
        
        if(n>1)
        {
            cost2=frog(n-2,dp,height)+abs(height[n]-height[n-2]);
        }
        
        return dp[n]=min(cost1,cost2);
      
      
  }
  
  
  
  
    int minCost(vector<int>& height) {
        
        int n=height.size()-1;
        vector<int>dp(n+1,-1)
        return frog(n,dp,height);
        
        
        
        
        
        
        
        
        
    }
};
