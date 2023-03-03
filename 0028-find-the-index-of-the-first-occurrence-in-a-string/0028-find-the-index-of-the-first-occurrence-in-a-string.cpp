class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = haystack.length();
        for(int i=0;i<n;i++){
            int lo=i,hi=0,flag=0;
            while(hi<needle.length()){
                if(haystack[lo]==needle[hi]){
                    if(hi == needle.length()-1) flag=1;
                    lo++;hi++;
                }
                else break;
            }
            if(flag==1) return i;
        }
        return -1;
    }
};