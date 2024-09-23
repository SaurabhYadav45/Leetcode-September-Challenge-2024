class Solution {
public:
    int solve(string s, unordered_set<string>&st, int i, int n, vector<int>&dp){
        if(i >= n) return 0;

        if(dp[i] != -1){
            return dp[i];
        }

        // If current element is taken as extra character
        int result = 1 + solve(s, st, i+1, n, dp);

        //  If currebnt elemnt is not taken as extra char
        for(int j=i; j < n; j++){
            string curr = s.substr(i, j-i+1);
            if(st.count(curr)){
                result = min(result, solve(s, st, j+1, n, dp));
            }
        }
        // return result;
        return dp[i] = result;
    }

    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.length();
        vector<int>dp(n+1, -1);
        unordered_set<string>st(dictionary.begin(), dictionary.end());
        return solve(s, st, 0, n, dp); 
    }
};
