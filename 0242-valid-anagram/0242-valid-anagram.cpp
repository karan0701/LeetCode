class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int count[26] = {0};  // one slot per letter a–z

for (char c : s) count[c - 'a']++;  // increment for s
for (char c : t) count[c - 'a']--;  // decrement for t
for (int i = 0; i < 26; i++)
    if (count[i] != 0) return false;

return true;
        
    }
};