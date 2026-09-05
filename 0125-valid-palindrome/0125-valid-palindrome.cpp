class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;

        while(start < end) {

            if(!isalnum(s[start])){ // is alpha numeric number from start
                start++;
                continue;
            }
            if(!isalnum(s[end])){ // is alpha numeric number from end
                end--;
                continue;
            }


            if(tolower(s[start]) != tolower(s[end])) {
                return false;    
            } 
            start++;
            end--;
        }
        return true;
        
    }
};