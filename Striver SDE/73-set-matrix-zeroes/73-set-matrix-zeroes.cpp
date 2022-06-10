class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j,row=0,col=0;
        vector<int> zero;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    zero.push_back(i);
                    zero.push_back(j);
                }                    
            }
        }     
        if(zero.size()<2)
            return ;
        //cout<<zero.size()<<"\n";        
        for(i=0, row=zero[2*i];i<zero.size()/2 && row<matrix.size();
            i++)
        {
            row=zero[2*i];                      
            //cout<<i<<" "<<row<<" Cols: ";
            for(j=0;j<matrix[0].size();j++)
            {
                //cout<<j<<" ";
                matrix[row][j]=0;       
            }    
            //cout<<"\n";
        }
        //cout<<"\nExit Loop details: "<<i<<" "<<row<<"\n";        
        for(j=0,col=zero[2*j+1];j<zero.size()/2 && col<matrix[0].size();
            j++)
        {
            col=zero[2*j+1];
            //cout<<j<<" "<<col<<" Rows: ";
            for(i=0;i<matrix.size();i++)                
            {
                //cout<<i<<" ";
                matrix[i][col]=0;       
            } 
            //cout<<"\n";
        }
        //cout<<"\nExit Loop details: "<<j<<" "<<col<<"\n";        
        //cout<<"\n\n\n";                
    }
};