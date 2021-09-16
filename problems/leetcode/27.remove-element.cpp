/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start = 0;
        int i =0;
        while(i < nums.size()){
            
            while(i < nums.size() && nums[i] == val) {i++; continue;}
            
            if(i < nums.size()){
                nums[start++] = nums[i];
            }
            i++;
        }
        return start;
    }
};
// @lc code=end

