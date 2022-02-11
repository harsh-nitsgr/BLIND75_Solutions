
// the idea is that we will keep moving and insetrting the elements in the hashmap till the size of map is increasing(means all charectors are different) if not so we will start removing the very first element of the string

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
        
//         unordered_map<char,int>map;
//         int curL=0;
//         int finL=0;
//         int j=0;
        
//         for(int i=0;i<s.size();i++){
//             map[s[i]]++;
          
//             curL=map.size();
            
//             if(curL>finL)finL=curL;
//             else {
//                 if(map[s[j]]>1)map[s[j++]]--;
//                 else map.erase(s[j++]);
//             }
//         }
//         return finL;
//     }
// };

// second approach

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(128, -1);
        int left = -1, res = 0;
        
        for (int i = 0; i < s.length(); i++) {
            //left is moving when it finds some duplicate and it will reach to the last occurance of repeating charector
            left = max(left, m[s[i]]);
            m[s[i]] = i;
            res = max(res, i - left);
        }
        return res;
    }
};
