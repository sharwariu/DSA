class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> ans(2, -1);
       //ans[0]=-1;
       //ans[1]=-1;
       int i,j;
       int n = nums.size();
       for(i=0;i<n;i++)
       {
        for(j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
               ans[0]=i;
                ans[1]=j;
               
            }
        }
       }
       return ans;
    }

};