class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int size = gas.size();
        if (!size){
            return -1;
        }
        int sum = 0;
        int tank = 0;
        int start = 0;
        for (int i=0; i<size; i++){
            int gap = gas[i] - cost[i];
            sum += gap;
            tank += gap;
            if (tank < 0){
                start = i + 1;
                tank = 0;
            }
        }
        if (sum<0){
            return -1;
        }
        return start;
    }
};