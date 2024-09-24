class Solution {
public:
    int countDigit(int n){
        if(n == 0) return 1;

        int count =0;
        while(n != 0){
            count++;
            n /= 10;
        }
        return count;
    }
    
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int>st;

        for(int& val : arr1){
            while(!st.count(val) && val > 0){
                st.insert(val);
                val /= 10;
            }
        }

        int longestPrefix = 0;
        for(int& val : arr2){
            while(!st.count(val) && val > 0){
                val /= 10;
            }
            if(val > 0){
                // That means some common prefix mtched
                longestPrefix = max(longestPrefix, countDigit(val));
            }
        }
        return longestPrefix;
    }
};
