class Solution {
public:
    bool squareIsWhite(string coordinates) {     
        if ((coordinates[1] - '1') % 2 == (coordinates[0] - 'a') % 2) return false;
        else return true;
    }
};