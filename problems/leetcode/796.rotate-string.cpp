/*
 * @lc app=leetcode id=796 lang=cpp
 *
 * [796] Rotate String
 */

// @lc code=start
class Solution {
public:

    bool checkQueue(queue<char> q1,queue<char> q2, int n){
        bool isSame = true;
        int i=0; 
        while(i < n){

            if(q1.front() != q2.front()){
                return false;
            }
            q1.pop();
            q2.pop();

            i++;
        }
        return true;
    }
    bool rotateString(string s, string goal) {

        if(s.length() != goal.length()){
            return false;
        }


        // Solution 1
        queue<char> q1,q2;
        int n = s.length();
        int i=0;

        while(i<n){
            q1.push(s[i]);
            q2.push(goal[i]);
            i++;
        }



        i = 0;
        while(i < n){

            if(checkQueue(q1,q2, n)){
                return true;
            }else{
                char e = q1.front();
                q1.pop();
                q1.push(e);
                i++;
            }


            
        }


        return false;
    
    }
};
// @lc code=end

