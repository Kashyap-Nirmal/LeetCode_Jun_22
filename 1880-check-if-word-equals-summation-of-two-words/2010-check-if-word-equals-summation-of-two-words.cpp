class Solution {
public:
    void numericValue (string* word) {
        for (int i = 0; i < word -> size(); i++)
            word -> at(i) += '0' - 'a';      
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        bool ans;
        numericValue(&firstWord);
        numericValue(&secondWord);
        numericValue(&targetWord);
        return (stoi(firstWord) + stoi(secondWord)) == stoi(targetWord);
    }
};