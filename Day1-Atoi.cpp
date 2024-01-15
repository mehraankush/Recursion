 int myAtoi(string s) {
        bool sign = true;
        int res = 0;
        int n = s.length();
        int i = 0;

        // skipping the wide spaces
        while(s[i]==' ' && i<n)i++;

        //check for sign
        if(s[i]=='-' || s[i] == '+'){
            sign = (s[i] == '+');
            i++;
        }

        while(i<n){
            int a = int(s[i] - '0');

            if(a>=0 && a<=9){

                if (res > INT_MAX / 10 || (res == INT_MAX / 10 && a > 7)) {
                    return sign ? INT_MAX : INT_MIN;
                  }
               res = res*10 + a;
            }
            else{
                break;
            }
            i++;
        }

        return sign ? res : -res;
    }
