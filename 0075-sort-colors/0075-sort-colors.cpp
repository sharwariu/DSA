class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        int j= i+1;
        for (i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(nums[j]<nums[i])
                {
                    int temp= nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;
                }
            }
        }
    }
};