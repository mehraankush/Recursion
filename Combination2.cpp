

void findCombinations(vector<int>& arr,int target,vector<int>&temp,vector<vector<int>>&res,int ind){
    if(target==0){
      res.push_back(temp);
      return;
    }

  for(int i=ind;i<arr.size();i++){
    if(i>ind && arr[i]==arr[i-1])continue;
    if(arr[i]>target)break;
    temp.push_back(arr[i]);
    findCombinations(arr,target - arr[i], temp, res, i+1);
    temp.pop_back();
  }
}




vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>temp;
        findCombinations(candidates,target, temp, res, 0);
        return res;
  }
