// Backtracking 

void generateStringWIthNSize(int n,string curr,vector<string>&res){
  if(curr.size()==n){
    res.push_back(curr);
    return;
  }
  if(curr.empty() || curr.back() == '0'){
    generateStringWIthNSize(n,curr+'0',res);
     generateStringWIthNSize(n,curr+'1',res);
  }
  else if(curr.back() == '1'){
    generateStringWIthNSize(n,curr+'0',res);
  }
}

vector<string> generateString(int N){
  vector<string>res;
  generateStringWIthNSize(N,"",res);
  return res;
}
