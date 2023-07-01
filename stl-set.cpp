#include <iostream>
#include <set> // implemented using BST

using namespace std;

int main(){
      // implemented using BST
      set<int> s;
      s.insert(4);
      s.insert(2);
      s.insert(1);
      s.insert(3);

      for(auto i : s){
            cout<<i<<" ";
      }cout<<endl;

      s.erase(s.begin());

      for(auto i : s){
            cout<<i<<" ";
      }cout<<endl;


      set<int>::iterator it = s.begin();
      it++;

      // Erase the second element
      s.erase(it);
      for(auto i : s){
            cout<<i<<" ";
      }cout<<endl;


      cout<<"4 present or not: "<< s.count(4)<<endl; // count = present/not

      set<int>::iterator itr = s.find(2);

      //cout<<"value presert at itr: "<<itr<<endl;

      for(auto it = itr; it != s.end(); it++){
            cout<<*it<<" ";
      }cout<<endl;
}