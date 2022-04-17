//Question link
//https://leetcode.com/problems/set-matrix-zeroes/


class Solution 
{

    public:
    
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int *row= new int[matrix.size()];
        int *column= new int[matrix[0].size()];
        
        *row={0} ; *column={0};
        
        cout<<matrix.size()<<" "<<matrix[0].size()<<endl;
        
        int i,j;
        
        
        for(i=0 ; i<matrix.size() ; i++)
        {
            for(j=0 ; j<matrix[0].size() ; j++)
            {
                if(matrix[i][j]==0)
                {
                    // cout<<i<<" "<<j<<endl;
                    row[i]=-1;
                    column[j]=-1;
                }
            }
        }
        
        
        for(i=0 ; i<matrix.size() ; i++)
        {
            for(j=0 ; j<matrix[0].size() ; j++)
            {
                if(row[i]==-1 || column[j]==-1)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
        delete [] row; delete [] column;
    }

};
