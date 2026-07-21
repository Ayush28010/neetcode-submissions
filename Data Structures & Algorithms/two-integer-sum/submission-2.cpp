class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> copyArray;
        for(int i = 0; i < nums.size(); i++){
            copyArray.push_back({nums[i],i});
        }
        sort(copyArray.begin(),copyArray.end());
        int initialPointer = 0;
        int endPointer = nums.size()-1;
        while (initialPointer < endPointer){
            int currentValue  = copyArray[initialPointer].first + copyArray[endPointer].first;
            if ( currentValue == target){
                int ind1 = copyArray[initialPointer].second;
                int ind2 = copyArray[endPointer].second;
                return {min(ind1,ind2),max(ind1,ind2)};
            }
            if(currentValue < target){
                initialPointer++;
            }
            else{
                endPointer--;
            }
        }
        return {};
    }
};
