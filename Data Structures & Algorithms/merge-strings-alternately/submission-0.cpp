class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a = word1.size();
        int b = word2.size();
        int l =0;
        int r =0;
        string  ans;
       while(l<a || r<b){
        if(l<a) ans+= word1[l++];
        if(r<b) ans+=word2[r++];
       }
       return ans;

    }
};