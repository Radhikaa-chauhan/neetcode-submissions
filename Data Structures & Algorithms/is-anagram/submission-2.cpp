class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, int> mp;
        for(char i : s){
            mp[i]++;
        }
        for(char j : t){
            mp[j]--;
        }
        for(auto pair : mp){
            if(pair.second != 0) return false;
        }
        return true;
    }
};
