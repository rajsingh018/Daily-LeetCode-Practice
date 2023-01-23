class Solution {
public:
    
    int reverseNum(int n){
        int res=0;
        while(n>0){
            int k = n%10;
            n=n/10;
            res = res*10 + k;
        }
        return res;
    }
    int alternateDigitSum(int n) {
        int rev = reverseNum(n);
        int fin=0;
        while(rev>0){
            int k = rev%10;
            rev=rev/10;
            fin=fin+k;
            
            if(rev>0){
                k=rev%10;
                rev=rev/10;
                fin=fin-k;
            }
        }
        
        return fin;
    }
};
