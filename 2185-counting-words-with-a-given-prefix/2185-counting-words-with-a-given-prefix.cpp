class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        int n = pref.length();
        for(int i = 0;i<words.size(); i++){
            string str1 = words[i].substr(0,n);
            if(str1 == pref) count++;
        }
        return count;
    }
};