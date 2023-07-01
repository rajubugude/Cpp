#include <iostream>
#include <deque>

using namespace std;

int main(){
      deque<int> d;

      d.push_back(1);
      d.push_front(2);
      d.push_back(3);

      for(int i:d){
            cout<< i<< " ";
      }cout << endl;

      cout << "element at index 1: " << d.at(1)<<endl;

      cout << "element at 1st : " << d.front()<<endl;

      cout << "element at last: " << d.back()<<endl;

      cout << " Empty or Not? " << d.empty()<<endl;
      
      cout << " size of d Before erase: " << d.size()<<endl;


      d.erase(d.begin(),d.begin()+1); // for erase specify range 

      cout << " size of d after erase: " << d.size()<<endl;
      

      d.erase(d.begin(),d.end()); 

      cout << " size of d after erase: " << d.size()<<endl;
} 