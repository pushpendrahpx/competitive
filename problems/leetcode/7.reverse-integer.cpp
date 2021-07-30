/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
#include <math.h>
class Solution {
public:
    long long reverse(int x) {
        
        bool isn = ((x>=0) ? true:false);

        long long n=0;
        int i=0;
        x = abs(x);
        while(x > 0){
            int dig = x%10;
            n = n*pow(10,1) + dig;
            x /= 10;
            i++;
        }

        if(isn == false)
            n= -1*n;

        if(n >= -1*pow(2,31) && n < (pow(2,31)-1)){
            return n;
        }else{
            return 0;
        }
    }
};
// @lc code=end

