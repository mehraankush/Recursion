


void Insert_Correct(int x, stack<int>&s){
  if(s.size()==0){
    s.push(x);
  }
  else{
    int temp = s.top();
    s.pop();
    Insert_Correct(x,s);
    s.push(temp);
  }
}

void reverseTheStack(stack<int>& s){
  if(s.size()>0){
     int x = s.top();
    s.pop();
    reverseTheStack(s);
    Insert_Correct(x,s);
  }
}

void reverseStack(stack<int> &s) {
  return reverseTheStack(s);
}
