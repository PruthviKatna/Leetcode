//Working TLE solution

class Solution {
public:
    long long wonderfulSubstrings(string s) {
        
    int n = s.size();
    long long count =0;
     for (int i = 0; i < n; i++){
        for (int len = 1; len <= n - i; len++)
        {
            string s1 =  s.substr(i, len) ;
            unordered_map<char,int> m;
            
            f
           for(char c : s1)
                m[c]++;
            int c =0;
            for(auto a : m){
                if(c >1)
                    break;
                if(a.second%2!=0)
                    c++;
            }
            m.clear();
            if(c<=1)
                count++;
        }
     }
        return count;
            
            
    }
};