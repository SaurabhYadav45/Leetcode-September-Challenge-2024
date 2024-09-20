```
class Solution {
public:
    string shortestPalindrome(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());

        // for(int i=0; i<s.length();i++){
        //     if(s.substr(0, s.length()-i) == rev.substr(i)){
        //         return rev.substr(0, i) + s;
        //     }
        // }

        // Using Memory compare method (memCMP)
        for(int i=0; i<s.length();i++){
            if(memcmp(s.c_str(), rev.c_str()+i, s.length()-i) == 0){
                return rev.substr(0,i) + s;
            }
        }
        return rev + s;
    }
};
```
