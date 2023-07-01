#include <bits/stdc++.h>
using namespace std;

// int main(){
      /*int a;
      cin>> a;
      if (a>0){
            cout<<"a is positive"<< endl;
      }
      else if (a<0) {
           cout<<"a is negative"<< endl; 
      }
      else{
            cout<<"a is zero"<< endl;
      }
      */

     /*int a,b;
     cin >> a >> b;
     if(a >b){
      cout << a << endl;
     }
     else if (a < b){
      cout << b << endl;
     }
     else{
      cout << "equal"<< endl;
     }
     */
// }



/*
int main(){
      int a = 5;
      int b = 3;
      if(a>b &&  a % 2 != 0){
            cout<<a<< endl;
      }
      else{
            cout << b << endl;
      }
}
*/



/*
int main() {
      int sum = 0;
      int i = 1;
      int n;
      cin >> n;
      while(i <= n){
            cout<<i<<" ";
            // cout<< i<< endl;
            sum += i;
            i ++;
      }
      cout <<endl;
      cout<< "sum is " <<sum;

}
*/



int main(){
      int n=4;
      int i,j;
      i = 1;

      // while (i <= n){
      //       j=1;
      //       while (j <= n){
      //             cout <<"*"<<" ";
      //             j ++;
      //       }
      // cout<<endl;
      // i ++;
      // }


      
      while(i<=n){
            j = 1;
            int count= i;
            while(j<= i){
                  cout <<count<<" ";
                  count ++;
                  j +=1;
            }
            cout << endl;
            i ++;
      }
}


