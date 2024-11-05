class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        vector<int>ans;
        int n=nums.size();
        ans.push_back(-1);
        ans.push_back(-1);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans[0]=i;
                    ans[1]=j;

                    return ans;
                }
            }
        }
        return ans;
    }
};