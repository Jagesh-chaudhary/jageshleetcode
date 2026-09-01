class Solution {
public:
    void reverseString(vector<char>& string) {
        int start = 0;
        int end = string.size()-1;

        while(start < end){
            swap(string[start], string[end]);
            start++;
            end--;
        }
        
    }
};