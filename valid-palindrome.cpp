class Solution {
public:
    bool isPalindrome(string s) {
        // initialize two pointers pointing to the beginning and end of the string
        int left = 0;
        int right = s.size() - 1;
        // loop until the pointers meet or cross each other
        while (left < right) {
            // skip any non-alphabetic characters on the left
            while (left < right && (std::ispunct(s[left]) || std::isspace(s[left]))) {
                left++;
            }
            // skip any non-alphabetic characters on the right
            while (left < right && (std::ispunct(s[right]) || std::isspace(s[right]))) {
                right--;
            }
            // compare the characters at the two pointers in a case-insensitive way
            if (std::toupper(s[left]) != std::toupper(s[right])) {
                return false;
            }
            // move the pointers towards each other
            left++;
            right--;
        }
        // if the loop ends without returning false, it means the string is a palindrome
        return true;
    }
};
