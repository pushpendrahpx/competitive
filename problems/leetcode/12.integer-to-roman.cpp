/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
class Solution {
public:
    int lowLimit(int num){
        if(num>=1000){
            return 1000;
        }else if(num >= 900){
            return 900;
        }else if(num >= 500){
            return 500;
        }else if(num >= 400){
            return 400;
        }else if(num >= 100){
            return 100;
        }else if(num >= 90){
            return 90;
        }else if(num >= 50){
            return 50;
        }else if(num >= 40){
            return 40;
        }else if(num >= 10){
            return 10;
        }else if(num >= 9){
            return 9;
        }else if(num >= 5){
            return 5;
        }else if(num >= 4){
            return 4;
        }else if(num >= 1){
            return 1;
        }

        return 0;
    }
    string digChange(int num){
        switch(num){
            case 1: return string("I"); 
            case 4: return string("IV");
            case 5: return string("V");
            case 9: return string("IX");
            case 10: return string("X");
            case 40: return string("XL");
            case 50: return string("L");
            case 90: return string("XC");
            case 100: return string("C");
            case 400: return string("CD");
            case 500: return string("D");
            case 900: return string("CM");
            case 1000: return string("M");
            default: return string("~");
        }
    }
    string intToRoman(int num) {
        string s("");
        while(num > 0){
            
            int llow = lowLimit(num);
            num -= llow;
            s += digChange(llow);
        }
        return s;



    }
};
// @lc code=end

