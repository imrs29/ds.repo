class Solution {
public:
    string longestPalindrome(string s) {
        
         if(s.length() <= 1)
             return s;
        int max_len = 1; // atleast one will be there 
       
        int start = 0,end = 0;
        
            //ODD length
            for(int i = 0;i < s.length()-1;i++){
                    int l = i, r = i;
                    while(l >= 0 && r < s.length()){
                            if(s[l] == s[r]){
                                    l--;
                                    r++;
                            }else
                                    break;
                    }
                    int len = r-l-1;
                    if(len > max_len){
                            max_len = len;
                            start = l+1;
                            end = r-1;
                    }
            }
            
            //Even length
            for(int i = 0;i < s.length()-1;i++){
                    int l = i, r = i+1;
                    while(l >= 0 && r < s.length()){
                            if(s[l] == s[r]){
                                    l--;
                                    r++;
                            }else
                                    break;
                    }
                    int len = r-l-1;
                    if(len > max_len){
                            max_len = len;
                            start = l+1;
                            end = r-1;
                    }
            }
            
            return s.substr(start,max_len);
        
        
    }
};