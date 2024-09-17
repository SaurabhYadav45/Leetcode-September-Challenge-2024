# POTD 16 September
``` CPP
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int>mp;
        string s = "";
        for(int i=0; i<s1.size();i++){
            if(s1[i] != ' '){
                s += s1[i];
            }
            else{
                mp[s]++;
                s.clear();
            }
        }
        mp[s]++;

        s = "";
        for(int i=0; i<s2.size();i++){
            if(s2[i] != ' '){
                s += s2[i];
            }
            else{
                mp[s]++;
                s.clear();
            }
        }
        mp[s]++;
        
        vector<string>result;
        for(auto& it: mp){
            if(it.second == 1){
                result.push_back(it.first);
            }
        }
        return result;
    }
};
```
