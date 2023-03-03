class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = haystack.length();
        for(int i=0;i<n;i++){
            int lo=i,hi=0;
            while(hi<needle.length()){
                if(haystack[lo]==needle[hi]){
                    lo++;hi++;
                }
                else break;
            }
            if(haystack.substr(i, needle.length())==needle) return i;
        }
        return -1;
    }
};