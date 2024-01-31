

int FindSum(vector<int>&arr){
     int temp = 0;
	for(int i=0;i<arr.size();i++){
       temp+=arr[i];
	}

	return temp;
}

void findSubsetSum(vector<int> &arr,vector<int>&res,vector<int>temp,int ind){
	if(ind==arr.size()){
		if(temp.size()!=0){
           int sum = FindSum(temp);
		   res.push_back(sum);
		}else{
		 res.push_back(0);
		}
		return;
	}
	temp.push_back(arr[ind]);
	findSubsetSum(arr,res,temp,ind+1);
	temp.pop_back();

	findSubsetSum(arr,res,temp,ind+1);
}


vector<int> subsetSum(vector<int> &num){
	// Write your code here.
	vector<int>res;
	vector<int>temp;
	findSubsetSum(num,res,temp,0);
	sort(res.begin(),res.end());
	return res;
		
}



//Second solution



int FindSum(vector<int>&arr){
     int temp = 0;
	for(int i=0;i<arr.size();i++){
       temp+=arr[i];
	}

	return temp;
}

void findSubsetSum(vector<int> &arr,vector<int>&res,int ind,int sum){
	if(ind==arr.size()){
		res.push_back(sum);
		return;
	}

	findSubsetSum(arr,res,ind+1,sum+arr[ind]);

	findSubsetSum(arr,res,ind+1,sum);
}


vector<int> subsetSum(vector<int> &num){
	// Write your code here.
	vector<int>res;
	findSubsetSum(num,res,0,0);
	sort(res.begin(),res.end());
	return res;
		
}
