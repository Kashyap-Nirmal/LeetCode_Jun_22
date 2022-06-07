class Solution {
public:
    string countAndSay(int n) {
        int cnt=0,j,i;
        string s="1",sNew="",c;        
        for(i=2;i<=n;i++)
        {            
            c=s[0];
            cnt=1;
            sNew="";
            for(j=1;j<s.size();j++)
            {
                if(s[j]==c[0])
                    cnt++;
                else
                {
                    sNew+=to_string(cnt)+c;    
                    c=s[j];
                    cnt=1;                    
                }                                    
            }
            sNew+=to_string(cnt)+c;    
            s=sNew;
        }
        return s;
    }
};