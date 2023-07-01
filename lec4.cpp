#include <bits/stdc++.h>
using namespace std;

/*
int main(){
          int a = 4;
    int b = 6;

    cout<<" a&b " << (a&b) << endl;
    cout<<" a|b " << (a|b) << endl;
    cout<<" ~a " << ~a << endl;
    cout<<" a^b " << (a^b) << endl;

    cout<< (17>>1)<<endl;
    cout<< (17>>2) <<endl;
    cout<< (19<<1) <<endl;
    cout<< (21<<2) <<endl;

    int i = 7;

    cout<< (++i) <<endl;
    // 8 
    cout<< (i++) <<endl;
    // 8 , i = 9
    cout<< (i--) <<endl;
    //9 , i = 8 
    cout<< (--i) <<endl; 
    // 7, i =7
    return 0;
}
*/

int main(){
      // for(int i = 0;i < 5;i++){
      //       cout<< i <<endl;
      // }
      int a,b,summ;
      a = 0,b = 1;
      for(int i=1; i <= 10; i++){
            summ = b + a;
            cout<<summ<<" ";
            a = b;
            b = summ;
      }
      // cout<< a<< endl;
}