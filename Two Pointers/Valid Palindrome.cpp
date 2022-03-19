class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.length();
        if(n <= 1) // if string length is 1 or o then the string is a palindrome
            return true;
        
        int start = 0, end = n - 1;
        while(start < end){
            
            while(start < end && !isalnum(s[start])) // skip the alpha numeric or special chars 
                start++;
                
              while(start < end && !isalnum(s[end]))
                end--;
            
            if(start < end && tolower(s[start]) != tolower(s[end]))
                return false;
            start++; end--;
        }
        return true; // time complexity : O(n) // space complexity: O(1)
        
    }
};
