class Solution {
public:
    bool halvesAreAlike(string s) {
                int n = s.size() ;
        int cc = 0 ;
        for(int i = 0 ; i<n ; i++){
            char id = s[i] ;
            vector<char> ch {'a','e','i','o','u','A','E','I','O','U'} ;
            for(auto c : ch){
                if (c != id) continue ;
                if (i < (n/2)) cc++ ;
                else cc-- ;
            }
        }
        if (cc != 0) return false ; 
        return true ;
    }
};
