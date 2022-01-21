class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> dic; // the projection map, key is the char in pattern and the value is a word
        set<string> word_set;
        set<char> pattern_set;
        vector<string> words;
        istringstream iss(s);
        string word;
        while (iss >> word) {  words.push_back(word); word_set.insert(word); }
        for (int i = 0; i < pattern.length(); i ++) pattern_set.insert(pattern[i]);
		// 'aa' -> 'dog', 'ab' -> 'dog dog', 'abc'- > 'cat dog cat'
        if (words.size() != pattern.length() || word_set.size() != pattern_set.size()) return false;
        for (int i = 0; i < words.size(); i++) {
            if (dic.count(pattern[i]) > 0) { // pattern[i] has been projected to some word
                if (dic[pattern[i]] != words[i]) return false; // 'aba' -> 'cat dog dog'
            } else {
                dic[pattern[i]] = words[i];
            }
        }
        return true;    
    } 
};
// class Solution {
// public:
    
//     // not easy
    
    
//     bool wordPattern(string p, string s) {
//         unordered_map<char,vector<int>>mp1;
//         vector<string>v;
//         string sub;
//         for(int i=0;i<s.length();)
//         {
//             while(i<s.length() && s[i]!=' ')
//             {
//                 sub.push_back(s[i]);
//                 i++;
//             }
//             v.push_back(sub);
//             sub.clear();
//             i++;
            
//         }
//         if(v.size() != p.length())
//             return false;
        
//         for(int i =0;i<p.length();i++)
//         {
//             if(mp1.find(p[i]) == mp1.end())
//                 mp1[p[i]] = {i};
//             else
//             {
//                 mp1[p[i]].push_back(i);
//             }
//         }
        
//         unordered_set<string>st;
//         for(auto &i : mp1)
//         {
//             vector<int> temp;
//             temp = (i).second;
//             if(st.find(v[temp[0]]) != st.end())
//                 return false;
//             else
//                 st.insert(v[temp[0]]);
//             for(int j = 1;j<temp.size();j++)
//             {
//                 int l = temp[j-1];
//                 int r = temp[j];
//                 if(v[r] != v[l])
//                     return false;
//             }
//         }
//         return true;
//     }
// };