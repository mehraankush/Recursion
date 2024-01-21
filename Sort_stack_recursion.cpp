void Insert_Correct(int x,stack<int>&s){
  if(s.empty() || s.top()<x){
    s.push(x);
  }
 
  else{
    int temp = s.top();
    s.pop();
    Insert_Correct(x,s);
    s.push(temp);
  }
}


stack<int> reverseStack(stack<int> &s){
  if(s.size()>0){
    int x = s.top();
    s.pop();
    reverseStack(s);
    Insert_Correct(x,s);
  }
  return s;
} 

stack<int> sortStack(stack<int> &s){
	return reverseStack(s);
}
