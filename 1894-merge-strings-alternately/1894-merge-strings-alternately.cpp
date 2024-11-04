class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string temp = "";
        int i = 0;
        for(i = 0; i < min(word1.size(), word2.size()); i++)
            temp += word1.substr(i, 1).append(word2.substr(i, 1));
        if (word1.size() > i) 
            temp += word1.substr(i, word1.size() - i);
        else if (word2.size() > i) 
            temp += word2.substr(i, word2.size() - i);
        return temp;
    }
};