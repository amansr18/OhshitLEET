class Solution {
public:
    bool rec(vector<char>&str , int i){
        if(i >= str.size()/2)
            return true;
        if(str[i] == str[str.size() - 1 - i]){
            return rec(str , i+1);
        }
        else
            return false;
    }
    bool isPalindrome(string s) {
        //strings immutable hoti hai isliye main ish string ke characters ko ek
        //vector mein daal rha hoon bro
        vector<char>str ;
        for(auto &i : s){
            i = tolower(i);
            if(ispunct(i) or i == ' '){ //ignore ker rhe hai yaha per hum un sare                                               letters ko 
                continue;
            }
            str.push_back(i);
        }
        return rec(str , 0);
    }
};