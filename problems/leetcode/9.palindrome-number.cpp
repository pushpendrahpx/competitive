/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x==0)    return true;
        vector<int> digits;
        int n = x;
        while(n>0){
            int dig = n%10;
            digits.push_back(dig);
            n /= 10;
        }
        n = digits.size();
        for(int i=0,j = n-1; i<j; i++,j--){
            if(digits[i] != digits[j])  return false;
        }
        return true;
    }
};
// @lc code=end

