#include <iostream>
#include <stack>

using namespace std;

int main(){
      stack<string> s;

      s.push("abc");
      s.push("def");
      s.push("ghi");

      cout<<"Top element: "<<s.top()<< endl;

      s.pop();
      cout<<"Top element after pop: "<<s.top()<< endl;

      cout<<"Size of stack: "<<s.size()<< endl;
      
      cout<<"Empty or Not: "<<s.empty()<< endl;



}