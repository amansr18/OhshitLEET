class Solution {
public:
    string reverseWords(string s) {
         stringstream m(s);
        string p;
        s="";
        while(m >> p)
        s =  " " +p+s;
        s.erase(s.begin());
        return s;
    }
};