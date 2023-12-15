class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int startingRow = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        int endingRow = m-1;
        int startingColumn = 0;
        int endingColumn = n-1;
        
        // vector initialization to store the ans
        vector<int>ans;
        
        // counting
        int count = 0;
        int totalCount = m*n;
        
        while(count< totalCount)
        {
            // starting row traversal
            for(int i=startingColumn; i<=endingColumn && count<totalCount; i++)
            {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            
            //ending column traversal
            
            for(int i=startingRow; i<=endingRow && count<totalCount; i++ )
            {
                ans.push_back(matrix[i][endingColumn]);
                count++;
            }
            endingColumn--;
            
            //ending row traversal
            for(int i=endingColumn; i>=startingColumn && count<totalCount; i--)
            {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            
            //starting column traversal
            for(int i=endingRow; i>=startingRow && count<totalCount; i--)
            {
                ans.push_back(matrix[i][startingColumn]);
                count++;
            }
            startingColumn++;
            
            
            
        }
        return ans;
        
    
    }
};