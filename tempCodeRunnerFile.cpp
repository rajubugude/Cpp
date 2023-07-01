#include <bits/stdc++.h>
using namespace std;

int main(){
      int ans,ten,power,bit,n;

      ans = 0;
      n = 10;

      power = 0,ten = 10;
      while(n != 0){
            bit = n & 1;
            ans += ((int)(pow(ten, power) + 1e-9)*bit);
            power += 1;
            n >> 1;   
      }
      cout << ans;

}