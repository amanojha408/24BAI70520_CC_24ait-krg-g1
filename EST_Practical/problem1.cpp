class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>freq;
        int maximum=0;
        int last=0;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            while(freq[s[i]]>1){
                freq[s[last]]--;
                last++;
            }
            maximum=max(maximum,i-last+1);
        }
        return maximum;
    }
};
