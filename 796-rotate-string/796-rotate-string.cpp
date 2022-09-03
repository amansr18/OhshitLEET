class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        if(s.length()==1) return true;
        int n = s.length();
        string temp = s+s;  //temp will contail all the elements of s even after rotation
        
        for(int i=0;i<n;i++){
            int flag=0;
            for(int j=0;j<n;j++){
                if(goal[j]!=temp[j+i]){     //after finding first match,check all the next characters of goal...
                    flag=1;                //...by incrementing bot goal and s //goal[j]!=s[j+i]//
                    break;                      
                }
            }
            if(flag==0) return true;
        }
        return false;
    }
};