class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.length()-1;i>=0;i--){
            char st = num[i];
            int n = st - '0';
            if(n%2!=0){
                return num;
            }
            else num.erase(i,1);
        }
        return "";
    }
};