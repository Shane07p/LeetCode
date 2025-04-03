class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        vector<int> hs(26, 0);

        for(int i = 0; i < n; i++) hs[s[i] - 'a']++;

        for(int i = 0; i < n; i++) {
            if(hs[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};
