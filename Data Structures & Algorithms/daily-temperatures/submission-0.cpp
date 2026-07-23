class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size());

        for(int i =0; i< temperatures.size() ; i++){
            int j =i+1;
            int count = 1;
            while(j< temperatures.size()){
                if(temperatures[j] > temperatures[i] ){
                    break;
                }
                count++;
                j++;
            }
            count = ( j == temperatures.size()) ? 0 : count;
            ans[i] = count;
        }
        return ans;
    }
};
