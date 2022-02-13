class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return 0;
        string st(26,'0');        
        for(int i=0;i<s.size();i++) {
            st[s[i]-'a']++;
            st[t[i]-'a']--;
        }
        for(int i=0;i<st.size();i++) if(st[i] != '0')return 0;
        return 1;
    }
};