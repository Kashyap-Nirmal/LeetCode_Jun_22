#include<string>
class Solution {
public:
    string reverseWords(string s) {    
        //cout<<"\n\n";
        //cout<<s.size()<<"\n";
        reverse(s.begin(),s.end());
        int i,j=0;
        string::iterator it,pit;
        pit=s.begin();
        it = s.begin();        
        for(i=0;i<s.size()-1;i=(it-s.begin()))
        {
            it = find(s.begin()+(pit-s.begin()), s.end(), ' ');        
            //cout<<it-s.begin()<<" "<<pit-s.begin()<<"  ";
            if(pit==it)
            {
                s.erase(s.begin()+(it-s.begin()));
                it = find(s.begin()+(pit-s.begin()), s.end(), ' ');                     
            }      
            else
            {
                reverse(s.begin()+(pit-s.begin()),s.begin()+(it-s.begin()));
                pit = s.begin()+(it-s.begin())+1;
            }                
            //cout<<" "<<pit-s.begin()<<" "<<"\n";
        }
        it = find(s.begin()+(pit-s.begin()), s.end(), ' ');     
        //cout<<"O "<<s.size()<<" "<<it-s.begin()<<" "<<pit-s.begin()<<" "<<"\n";       
        reverse(s.begin()+(pit-s.begin()),s.begin()+(it-s.begin()));
        while(*s.rbegin()==' ')
        {
            //cout<<"I ";
            s.erase(s.begin()+s.size()-1);                        
        }            
        return s;
    }
};