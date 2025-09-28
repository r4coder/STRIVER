//House Robber II


class Solution {
public:
    int solve(int ind,vector<int>&nums,vector<int>&dp)
    {

         
        if(ind<0)
        {
             return 0;
        }

         if(ind==0)
        {
           return nums[0];
        }

        if(dp[ind]!=-1)
        {
               return dp[ind];
        }




        int pick=nums[ind]+solve(ind-2,nums,dp);
        int npick=solve(ind-1,nums,dp);

        return dp[ind]=max(pick,npick);







    }

    int btw(vector<int>&x)
    {
            int n=x.size();
            vector<int>dp(n+1,-1);
            return solve(n-1,x,dp);

    }






    int rob(vector<int>& nums) {

          int n=nums.size();

          if(n==1)
          {
            return nums[0];
          }

        vector<int>one(nums.begin()+1,nums.end());
        vector<int>two(nums.begin(),nums.end()-1);
        return max(btw(one),btw(two));

        
        
    }
};
