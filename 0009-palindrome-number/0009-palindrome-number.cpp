class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int n=0, m=str.size()-1;
        while(n<=m){
            if(str[n]!=str[m]){
                return false;
            }
            n++;
            m--;
        }
        return true;
    }
};