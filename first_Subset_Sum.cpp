//Check if there exists a subsequence…
// 2^n
bool generateSub(vector<int>&a,int target,int sum,int ind){
   if(sum>target)return false;
   if(ind==a.size()){
      if(sum==target)return true;
      return false;
   }

   sum+=a[ind];

   if(generateSub(a,target,sum,ind+1))return true;
   sum-=a[ind];
   if(generateSub(a,target,sum,ind+1))return true;
   return false; 
}


bool isSubsetPresent(int n, int k, vector<int> &a)
{
   return generateSub(a,k,0,0);
}
