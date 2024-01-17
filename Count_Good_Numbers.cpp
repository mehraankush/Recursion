
long long Power(long long num,long long times){
   if(times==0)return num;
   if(times==1)return num%10000000007;
   long long ans = 1;

   long long res = Power(num,times/2)%10000000007;
   if(times%2){
     ans = (ans*num)%10000000007;
   }
  return (ans*(res*res)%10000000007)%10000000007;
}

  int countGoodNumbers(long long n) {
      long long ans= power(20,n/2);
        if(n%2){
           ans=(ans*5)%1000000007;
        }
        return ans;
 }
