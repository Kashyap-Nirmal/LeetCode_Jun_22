class Solution {
public:
    string reverseWords(string s) {
        /*
        int i,j,k=0;
        //string s;
        for(i=0;i<s.size();i++)
        {
            //cout<<i<<" "<<k<<" ";
            if(s[i]==' ' || i==s.size()-1)
            {
                //if()
                cout<<" "<<i<<" "<<k<<"\n\n";
                for(j=0;j<=(i-k)/2;j++)
                {
                    cout<<j<<" "<<i-1-j<<"\n";
                    if(i==s.size()-1)
                    {
                        i++;
                        cout<<"\nI\n";
                        swap(s[k+j],s[i-1-j]);
                        i--; 
                        continue;
                    }
                    swap(s[k+j],s[i-1-j]);                                    
                }                    
                k=i+1;    
            }        
        }
        return s;
        */
        int i,k=0;
        string j="";
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                //cout<<k<<" "<<i-1<<"\n";
                reverse(s.begin()+k,s.begin()+(i));
                k=i+1;
            }                
        }
        reverse(s.begin()+k,s.end());
        return s;            
    }
};