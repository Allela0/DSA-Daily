class Solution {
  public:
    int isGoodorBad(string S) {
        int vow = 0, cnst = 0;
        
        for (char c : S) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vow++;
                cnst = 0;  // Reset consonant count
            } 
            else if (c == '?') {
                // Treat '?' as either a vowel or a consonant
                vow++;
                cnst++;
            } 
            else {  // It's a consonant
                cnst++;
                vow = 0;  // Reset vowel count
            }
            // Check conditions
            if (vow > 5 || cnst > 3) {
                return 0;  // "Bad"
            }
        }
        return 1;  // "Good"
    }
};

//TC : O(N)
//SC : O(1)
/*Traverse through the string and check if it is a vowel if it is, increment vowel and reset cononant to zero. If '?' is found, increment both vowel and consonant as it can
be treated as both and finally increment only consonant and reset vowel if none of these is found. We reset because we need these characters consecutively. Finally return 0
or return 1 according to the condition.*/
