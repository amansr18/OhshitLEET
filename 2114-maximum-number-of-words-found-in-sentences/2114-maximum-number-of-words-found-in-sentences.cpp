class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=0;
        for(int i=0;i<sentences.size();i++){
            string s = sentences[i];
            int n = s.length();
            int count=1;
            for(int i=0;i<n;i++){
                if(s[i]==' '){
                   count++; 
                }
            }
            if(count>maxi) maxi=count;
        }
        return maxi;
    }
};