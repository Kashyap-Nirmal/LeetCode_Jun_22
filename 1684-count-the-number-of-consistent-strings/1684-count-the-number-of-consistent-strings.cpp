class Solution {
public:
    int count(string allowed, string b) {
        int ans = 0,tcnt = 0;
        for( int i = 0 ; i < allowed.size() ; i++ ) {
            for( int j = 0 ; j < b.size() ; j++ ) {               
                if(b[j] == allowed[i]) {
                    tcnt++;
                }                        
            }            
        }
        //cout<< b << " " << b.size() << " " << tcnt << "\n";
        if (tcnt == b.size()){
            ans = 1;
        }    
        return ans;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt = 0,tcnt = 0;
        for( int i = 0 ; i < words.size() ; i++ ) {
            cnt += count(allowed,words[i]);
        }
        return cnt;        
    }
};

/*
        set< char > s1;
        vector<set<char>> s2;
        int cnt = 0;
        for( int i = 0 ; i < allowed.size() ; i++ ) {
            s1.insert(allowed[i]);
        }
        for( int i = 0 ; i < words.size() ; i++ ) {
            set<char> stemp;
            for( int j = 0 ; j < words[i].size() ; j++ ) {
                stemp.insert(words[i][j]);
            }
            s2.push_back(stemp);            
        }
        for( int i = 0 ; i < s2.size() ; i++ ) {
            if (s1 == s2[i]) {
                cnt++;
                continue;
            }
            set<char>::iterator it;
            for( it = s2.begin() ; it != s2.end() ; it ++ ) {
                
            }
        }
        cout<<"\n";
        return cnt;
*/