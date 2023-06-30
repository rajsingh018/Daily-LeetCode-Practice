class Solution {
public:
    bool matching(char a, char b){
        return ((a=='(' and b==')')or (a=='[' and b==']') or (a=='{' and b=='}'));
    }
    bool isValid(string str) {
        stack<char>s;
        for(auto x:str){
            if(x=='(' or x=='[' or x=='{'){
                s.push(x);
            }
            else{
                if(s.empty()==true){
                    return false;
                }
                if(matching(s.top(), x)==false){
                    return false;
                }
                else{
                    s.pop();
                }
            }
        }
        if(s.empty()==false){
            return false;
        }
        return true;
    }
};