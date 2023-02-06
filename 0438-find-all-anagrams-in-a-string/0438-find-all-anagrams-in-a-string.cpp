class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
int s_len = s.length();       
        int p_len = p.length();       
         vector<int> ans;
        if(s_len < p_len)      
        return ans;
        
        vector<int> f_p(26,0);  
        vector<int> f_s(26,0);
        for(int i=0;i<p_len;i++)
        {
            f_p[p[i]-'a']++;
            f_s[s[i]-'a']++;
        }
        
       
        if(f_p ==f_s)
        ans.push_back(0);
        for(int i=p_len;i<s_len;i++){
            f_s[s[i-p_len] - 'a']--;
            f_s[s[i] - 'a']++;
            if(f_p == f_s) ans.push_back(i-p_len+1);
        }
        return ans;
    }
	};