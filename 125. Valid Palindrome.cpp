class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0, j = s.size() - 1; i < j;){
            if(!isalpha(s[i]) && !isdigit(s[i])){
                i++;
                continue;
            }

            if(!isalpha(s[j]) && !isdigit(s[j])){
                j--;
                continue;
            }

            if(tolower(s[i]) == tolower(s[j])){
                i++;
                j--;
            }
            else {
                return false;
            }

        }
        return true;
    }
};
