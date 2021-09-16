/*
 * @lc app=leetcode id=1528 lang=cpp
 *
 * [1528] Shuffle String
 */

// @lc code=start
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        int n = indices.size();
        char f[n+1];
        for(int i=0;i < n; i++){
            f[indices[i]] = s[i];
        }
        f[n] = '\0';
        return f;
    }
};
// @lc code=end

