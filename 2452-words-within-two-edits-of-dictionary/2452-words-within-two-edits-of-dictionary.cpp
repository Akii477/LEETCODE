class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
          int n = queries[0].size();
        vector<string> res;
        
        //take in consideration each word in queries
        for (string query : queries){
            //compare it to each word in dictionary
            for (string word : dictionary){
                int edits = 0;
                //find number of edits need to make query == word
                for (int i = 0; i < n; i++){
                    if (query[i] != word[i])
                        edits++;
                    //go to next word because we can have maximum of two edit
                    if (edits > 2)
                        break;
                }
                
                //if making query == word, needs less or equal than 2 edits, add it to res, and check next query
                if (edits <= 2){
                    res.push_back(query);
                    break;
                }
            }
        }
        
        return res;

        
    }
};