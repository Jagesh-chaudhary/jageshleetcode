class Solution {
public:
    bool isValid(string word) {
        bool vowel = false;
        bool consonant = false;

        //check length 
        if(word.length() < 3) {
            return false;
        }


        for(int i=0; i<word.length(); i++) {

            //digits
            if(word[i] >= '0' && word[i] <= '9' ) {
                continue;
            }

            //vowels
            if(word[i] == 'a' || word[i] == 'e' ||
               word[i] == 'i' || word[i] == 'o' || 
               word[i] == 'u' || word[i] == 'A' ||
               word[i] == 'E' || word[i] == 'I' || 
               word[i] == 'O' || word[i] == 'U') {
                vowel = true;
            } 

            //consonant
            else if((word[i] >= 'a' && word[i] <= 'z') || 
                    (word[i] >= 'A' && word[i] <= 'Z')) {
                        consonant = true;
            }

            //special character
            else {
                return false; 
            }
        }

        return vowel && consonant;

    }
};