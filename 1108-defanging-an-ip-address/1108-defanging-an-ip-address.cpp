class Solution {
public:
    string defangIPaddr(string address) {
        int i = 0,j;
        string ans="";
        for(i = 0; i < address.size() && j <= 4;i++){
            if(address[i] == '.'){
                j++;
                ans.push_back('[');
                ans.push_back(address[i]);    
                ans.push_back(']');
            }
            else
                ans.push_back(address[i]);
        }
        return ans;
    }
};