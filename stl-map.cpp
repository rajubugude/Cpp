#include <iostream>
#include <map>

using namespace std;
int main(){
      map<int,string> m;

      m[1] = "abc";
      m[2] = "def";
      m[3] = "ghi";

      for(auto i:m){
            cout<<i.first<<" "<<i.second<<" ";
      }cout<<endl;

      
}