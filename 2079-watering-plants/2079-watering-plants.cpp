class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int step = 0 , can = capacity;
        for(int i = 0 ; i<plants.size() ; i++)
        {
            if(can == capacity)
            {
                step =  step + (i+1);
                can = can - plants[i];
            }
            else if(can >= plants[i])
            {
                step =  step + 1;
                can = can - plants[i];
            }
            else 
            {
                step = step + i;
                i = i-1;
                can = capacity; //Filled up water
            }
        }
        return step;
    }
}; 