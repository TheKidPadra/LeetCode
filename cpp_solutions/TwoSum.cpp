class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int desireResult){
        for(int i=0; i<numbers.size(); i++){
            for(int j=i+1; j<numbers.size(); j++){
                if (numbers[i]+numbers[j]== desireResult){
                    return {i,j};
                }
            }
        }
        return {};
    }
};