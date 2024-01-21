// Backtracking

void generatePara(int n,int open,int close,string curr,vector<string>&res){

    if(curr.size()==n*2){
        res.push_back(curr);
        return;
    }

    if(open<n){
        generatePara(n,open+1,close,curr+'(',res);
    }
    if(close<open){
        generatePara(n,open,close+1,curr+')',res);
    }
}

    vector<string> generateParenthesis(int n) {
        vector<string>res;
        generatePara(n,0,0,"",res);
        return res;
}
