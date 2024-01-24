// using Backtacking with set data structure will give Time Limit Exceeded(TLE)
void findAllSubsequence(string &a,int index,string curr,set<string>&res){
    if(index == a.size()){
      res.insert(curr);
      return;
    }
   findAllSubsequence(a, index+1,curr, res);
    curr.push_back(curr);
   findAllSubsequence(a, index+1,curr, res);
}


string moreSubsequence(int n, int m, string a, string b)
{   set<string> uniqueSubsequencesA;
    set<string> uniqueSubsequencesB;

    findAllSubsequence(a, 0, "", uniqueSubsequencesA);
    findAllSubsequence(b, 0, "", uniqueSubsequencesB);

    return (uniqueSubsequencesA.size() > uniqueSubsequencesB.size()) ? a : b;
}
