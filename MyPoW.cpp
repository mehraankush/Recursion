
double Power(double x, int n,double res){
     if(n==0)return res;

      if(n%2==0){
         x = x*x;
         return Power(x,n/2,res);
      }
      if(n%2==1){
        res*=x;
        --n;
        return Power(x,n,res);
       }
    return 1;
}

double myPow(double x, int n) {
        if(n==0 || n==1){
            return (n==0)?1:x;
        }
         double res = 1;
       
       // INT_MIN Overflow Handle
       if(n<0){
          x = 1/x;
          res*=x;
          n++;
          n=-n;
       }
       return Power(x,n,res);
}
