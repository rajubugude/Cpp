#include <iostream>
#include <list> //implemented using doubly linked list
using namespace std;


int main(){
      list<int> l;

      list<int> newlist(5,2); //length = 5, elemtns = 2
      for(int i:newlist){
            cout<< i <<" ";
      }cout<<endl;

      l.push_back(1);
      l.push_front(2);
      l.push_back(3);

      for(int i:l){
            cout<< i<< " ";
      }cout<< endl;

      l.erase(l.begin());
      cout<< "After erase" << endl;

      for(int i:l){
            cout<< i<< " ";
      }cout<< endl;

      cout<< "size of list : " << l.size() << endl;


}