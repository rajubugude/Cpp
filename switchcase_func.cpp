#include <bits/stdc++.h>
using namespace std;

/*  Power Function

int power(int a, int b){
      int ans = 1;
      for(int i = 1; i <= b; i++){
            ans = ans*a;
      }
      return ans;

}

int main(){
      int a,b;
      cin>> a >> b;
      int ans = power(2,3); 
      cout<< ans << endl;
      return 0;

}

*/


/*Even Odd function
bool check(int a){
      if(a%2==0){
            return true;
      }
      else{
            return false;
      }

}

int main(){
      int a;
      a = 11;
      bool ans = check(a);
      if(ans==true){
            cout<< "even"<< endl;
      }
      else{
            cout<< "odd"<< endl;
      }

}

*/


/* NCR function

int ncr(int n, int r){
      if(n-r < r){
            r = n-r;
      }
      int ans = 1;
      for(int i = 0; i<r;i++){
            ans *= n-i;
            ans /= i+1;
      }
      return ans;
}


int main(){
      int n,r;
      int ans = ncr(5,2);
      cout<< ans;

}

*/



/* counting fn

void printCounting(int n){
      for(int i= 1; i<= n; i++){
            cout<< i<<" ";
      }
      cout<<" "<<endl;

}

int main(){
      int n =10;
      printCounting(n);
      return 0;

}

*/


/*  Prime number check 

bool checkprime(int a){
      int count = 0;
      if(a <= 3){
            return true;
      }
      for(int i = 2; i <= 10; i++){
            if(a%i==0){
                  count += 1;
            }
            if(count > 2){
                  return false;
            }
      }
      return true;
}


int main(){
      int a = 11;
      checkprime(a);
      if (checkprime(a)){
            cout<<"Prime"<<endl;
      }
      else{
           cout<<"Not a Prime"<<endl; 
      }
}

*/



/* th fionacci number

int nthFibonacci(int n){
      int a,b;
      int ans = 0;
      a = 0,b=1;
      if(n>1){
            for(int i = 1; i < n-1; i++){
                  ans = a+b;
                  b=ans;
                  a = b;
            }
            return a;

      }
      

}

int main(){
      int n;
      int ans = nthFibonacci(3);
      cout<< ans<< endl;
}

// 0 1 1 2 3 5 8 13.....fib series

*/

