class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int i=-1,flag=0;
        string s="";
        i = b.size()/a.size();
        cout<<i<<"\n";
        for(flag=0;flag<i;s.append(a),flag++);
        flag=0;
        cout<<s<<"\n\n";
        size_t found = s.find(b);
        if (found != string::npos)
            return i;
        for(;!flag && s.size()<10001;s.append(a),i++)
        {
            size_t found = s.find(b);
            if (found != string::npos)
                return i;
        }
        return -1;
    }
};