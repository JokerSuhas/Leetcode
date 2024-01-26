// The lengthOfLongestSubstring function finds the length of the longest substring without repeating characters in the given string s.
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = (int) s.size();  // Get the size of the input string.
        int max_len = 0;  // Initialize the maximum length of substring without repeating characters.

        // Iterate through each character in the string.
        for (int i = 0; i < size; i++) {
            unordered_set<char> chars;  // Create a set to track unique characters in the current substring.
            int len = 0;  // Initialize the length of the current substring.

            // Iterate through the characters from the current position to the end of the string.
            for (int j = i; j < size; j++) {
                // Check if the character is already in the set.
                if (chars.find(s[j]) != chars.end()) {
                    break;  // If a repeated character is found, break the loop.
                } else {
                    chars.insert(s[j]);  // Add the character to the set.
                    len++;  // Increment the length of the current substring.
                }

                max_len = max(max_len, len);  // Update the maximum length if needed.
            }
        }

        return max_len;  // Return the maximum length of substring without repeating characters.
    }
};
