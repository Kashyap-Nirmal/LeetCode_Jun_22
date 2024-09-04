class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        // Sometimes it will result in negative difference. So to get positive difference we added 8.
        if((8 + coordinate1[0] - coordinate2[0]) % 2  == (8 + coordinate1[1] - coordinate2[1]) % 2) return true;
        else return false;
    }
};