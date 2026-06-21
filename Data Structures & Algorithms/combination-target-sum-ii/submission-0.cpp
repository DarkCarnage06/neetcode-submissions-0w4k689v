class Solution {
public:
    void Combinationsums(vector<int>& candidates,
                         int target,
                         vector<int>& combination,
                         int i,
                         vector<vector<int>>& ans) {

        if(target == 0){
            ans.push_back(combination);
            return;
        }

        if(i == candidates.size() || target < 0){
            return;
        }

        // include
        combination.push_back(candidates[i]);
        Combinationsums(candidates,
                        target - candidates[i],
                        combination,
                        i + 1,
                        ans);
        combination.pop_back();

        // skip duplicates
        int index = i + 1;
        while(index < candidates.size() &&
              candidates[index] == candidates[index - 1]){
            index++;
        }

        // exclude
        Combinationsums(candidates,
                        target,
                        combination,
                        index,
                        ans);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates,
                                        int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> combination;

        Combinationsums(candidates,
                        target,
                        combination,
                        0,
                        ans);

        return ans;
    }
};