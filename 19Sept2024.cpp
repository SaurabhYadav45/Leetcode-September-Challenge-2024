class Solution {
public:
    static bool myComp(string a, string b){
    string t1 = a + b;
    string t2 = b + a;
    return t1 > t2;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>sNums;
        for(auto& n : nums){
            sNums.push_back(to_string(n));
        }
        
        sort(sNums.begin(), sNums.end(), myComp);
        string ans = "";
        if(sNums[0] == "0") return "0";
        for(auto& str : sNums){
            ans += str;
        }
        return ans;
    }
};