class Solution {
public:
vector<vector<int>>  res;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        res.clear();
        sort(candidates.begin(),candidates.end());
        vector<int> paths ;
        backtrack(candidates,  target, paths, 0, 0);
        return res;
    }

    void backtrack(vector<int>& candidates, int target, vector<int>& paths, int cur , int index){
        if(target == cur){
            res.push_back(paths);
            return;
        }

        for( int i = index; i< candidates.size(); i++){
             if( i> index && candidates[i] == candidates[i-1]){
                continue;
            }

            if( candidates[i] + cur > target){
                break;
            }
           
            paths.push_back(candidates[i]);
            backtrack(candidates, target, paths,  cur+candidates[i], i+1 );
            paths.pop_back();

        }
    }
};
