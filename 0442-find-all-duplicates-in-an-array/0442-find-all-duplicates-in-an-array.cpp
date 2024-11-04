class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp;  // Corrected spelling of unordered_map
        
        // Count occurrences of each number
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;  // Increment the count for each element in nums
        }
        
        vector<int> ans;
        
        // Find elements that appear exactly twice
        for (auto& x : mp) {  // Iterate through the unordered_map
            if (x.second == 2) {  // If the count of the element is 2
                ans.push_back(x.first);  // Add the element to the result
            }
        }
        
        return ans;
    }
};
