class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i, j, ans = 0, z, k = 0, l = 0;
        string token;

        stringstream ss1(version1); 
        stringstream ss2(version2); 

        vector<string> tokens1, tokens2; 
        char delimiter = '.'; 
  
        while (getline(ss1, token, delimiter)) tokens1.push_back(token); 

        while (getline(ss2, token, delimiter)) tokens2.push_back(token); 

        z = max(tokens1.size(), tokens2.size());

        for (i = 0; i < z; i++) {
            if (i < tokens1.size()) k = stoi(tokens1[i]);
            else k = 0;

            if (i < tokens2.size()) l = stoi(tokens2[i]);
            else l = 0;
            
            if (k > l) return 1;
            else if (k < l) return -1;
        }

        return 0;        
    }
};