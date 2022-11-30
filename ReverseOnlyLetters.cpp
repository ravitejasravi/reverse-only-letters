class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        int left = 0;
        int right = s.length() - 1;

        while(left <= right) {

            while(left < s.length() && (s[left] < 'a' || s[left] > 'z') && (s[left] < 'A' || s[left] > 'Z'))
                left++;

            while(right >= 0 && (s[right] < 'a' || s[right] > 'z') && (s[right] < 'A' || s[right] > 'Z'))
                right--;
            
            if( left <= right) {

                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;

                left++;
                right--;
            }
        }   

        return s;
    }
};