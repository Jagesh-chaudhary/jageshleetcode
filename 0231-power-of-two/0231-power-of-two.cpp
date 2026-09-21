class Solution {
public:
    bool isPowerOfTwo(int num) {
        if(num > 0 && !(num & (num - 1))){
            return true;
        } else {
            return false;
        }
        
    }
};