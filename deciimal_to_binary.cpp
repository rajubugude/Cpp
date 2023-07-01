#include <bits/stdc++.h>
using namespace std;


// INTEGER OUTPUT

// method 1 => decimal to binary

/*
int main(){
      int a,rem,power,ten,ans;

      ans = 0
      a = 10; // any integer

      power = 0;
      ten = 10;

      while(a != 0){
            rem = a % 2;
            a = a/2;
            ans += ((int)(pow(ten, power) + 1e-9)*rem);
            power += 1;
      }
      cout << ans;

}
*/


// method 2 => decimal to binary (from bits[and=>&] and rightshift[>>])

/*
int main(){
      int ans,i,n;
      ans = 0;
      n = 1000;
      i = 0;
      while(n!= 0){
            int bit = n&1;
            ans += ((int)(pow(10, i) + 1e-9)*bit);
            n = n >> 1;
            i += 1;
      }
      cout << ans<< endl;
}

*/


// Binary to decimal

/*
int main(){
      int ans,n,digit,i;
      
      n = 101010;

      ans = 0;
      i = 0;
      while(n!= 0){
            digit = n % 10;
            if(digit==1){
                  ans += ((int)(pow(2, i) + 1e-9)*digit);

            }
            i +=1;
            n = n/10;
      }
      cout << ans << endl;
}

*/


/*
int main(){
        int x;
        cin>> x;
        int upperLimit =  (pow(2,31) - 1)/10;
        int lowerLimit = -(pow(2,31)/10);
    
        int ans = 0;
        while(x){
           
            int digit = x%10;
			
            if(ans <= upperLimit && ans >= lowerLimit){ // Checking if ans will be there in integer range only.
                 int temp = ans * 10 + digit;
                 ans = temp;
                 x/=10;  
            }
            else{ // ans would exceed the int if multiplied by 10. Thus integer overflow occur
                cout << 0;
            }
            
        }
        cout<< ans;
        
    }

*/


