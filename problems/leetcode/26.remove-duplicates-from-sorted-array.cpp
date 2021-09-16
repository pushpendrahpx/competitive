/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        
        int st = 0;
        int i=0;
        while(i < nums.size()){
            nums[st++] = nums[i];
            while(i < nums.size()-1 && nums[i] == nums[i+1]){ i++; continue;}
            i++;
        }
        return st;
        
    }
};
// @lc code=end

