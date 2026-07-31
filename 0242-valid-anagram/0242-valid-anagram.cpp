class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_len=s.length();
        int t_len=t.length();

        if(s_len!=t_len) return false;

        unordered_map<char,int> mp;

        for(int i=0;i<s_len;i++){
            mp[s[i]]++;
        }

        for(int i=0;i<t_len;i++){
            
            if(mp.find(t[i])==mp.end()){
                return false;
            }else{
                mp[t[i]]--;
                if(mp[t[i]]<0){
                    return false;
                }
            }
        }

        return true;
    }
};