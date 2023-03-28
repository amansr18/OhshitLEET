class Solution {
public:
    
    int atoi(int i, int sign, string s, long result){
        if(sign*result<=INT_MIN) return INT_MIN;
        if(sign*result>=INT_MAX) return INT_MAX;
        
        if(i>=s.size() || s[i]>'9' || s[i]<'0'){
            return result*sign;
        }
        result = atoi(i+1, sign, s, (result*10 + (s[i]-'0')));
        return result;
    }
    
    int myAtoi(string s) {
        int i=0, n = s.size(), sign=1;
        
        while(i < n && s[i] == ' '){
            ++i;
        }
        if(s[i]=='-') sign=-1,++i;
        else if(s[i]=='+') ++i;
        
        return atoi(i, sign, s, 0);
    }
};