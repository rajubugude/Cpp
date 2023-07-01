#include <iostream>
#include <queue> //implemented using doubly linked list
using namespace std;


int main(){
      queue<string> q;

      q.push("abc");
      q.push("def");
      q.push("ghi");

      cout<<"Frist element: "<<q.front()<<endl;

      cout<<" Size before pop: "<<q.size()<<endl;

      q.pop();
      cout<<" Size before pop: "<<q.size()<<endl;
      cout<<"Frist element: "<<q.front()<<endl;






}