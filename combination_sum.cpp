
// 2^n*k TIme Complexity
void findAllCombinations(vector<int> &arr,int target,vector<int>&temp,vector<vector<int>>&res,int ind){
  if(ind==arr.size()){
     if(target==0){
        res.push_back(temp);
     }
    return;
  }
    if(arr[ind]<target){
       temp.push_back(arr[ind]);
       findAllCombinations(arr,target - arr[ind],temp,res,ind);
       temp.pop_back();
    }
  
    findAllCombinations(arr,target,temp,res,ind+1);
}

vector<vector<int>> combSum(vector<int> &ARR, int B)
{
    vector<vector<int>>res;
    vector<int>temp;

    findAllCombinations(ARR,B,temp,res,0);
    return res;
}
