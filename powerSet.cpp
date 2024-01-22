// iteartive solution

 vector<vector<int>> subsets(vector<int>& nums){
       vector<vector<int>>res;
    int n = nums.size();

    for(int i=0;i<(1<<n);i++){
       vector<int>temp;

      for(int j=0;j<n;j++){
         if(i & (1<<j)){
           temp.push_back(nums[j]);
         }
      }
       res.push_back(temp);
    }

   return res;
 }

// Backtracking 

   void generateSubsets(vector<int>& nums,int index ,vector<int>& current, vector<vector<int>>&res){
        if (index == nums.size()) {
            res.push_back(current);
            return;
        }
        // Exclude the current element
        generateSubsets(nums, index + 1, current, res);

        // Include the current element
        current.push_back(nums[index]);
        generateSubsets(nums, index + 1, current, res);
        current.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>res;
       int n = nums.size();
       vector<int>temp;
  
      generateSubsets(nums,0,temp,res);
      return res;
        
    }
