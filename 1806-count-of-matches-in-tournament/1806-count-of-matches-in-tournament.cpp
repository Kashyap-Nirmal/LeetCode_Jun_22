class Solution {
public:
    int numberOfMatches(int n) {
        int match = 0, team = 0, ans = 0;
        for (match = n; match != 1;) {
            if (match % 2 == 0) {
                team = match / 2;
                match = team;
                ans += team;
            } else {
                team = (match - 1) / 2 + 1;
                match = team - 1;
                ans += team;
            } 
        }
        return ans;
    }
};