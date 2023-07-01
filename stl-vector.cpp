#include <iostream>
#include<vector>
using namespace std;

int main(){
      // Dynamic type

      //initialization types 
      vector<int> v; // 1

      // for(int i:v){
      //       cout <<i<< " ";
      // }cout<< endl;

      vector<int> a(5,1); // initiated vector named "a" of size "5" with all "1's" in it
      
      for(int i:a){
            cout <<i<< " ";
      }cout<< endl;

      vector<int> b(a); //initiated a vector named "b" which is copy of "a"
      
      for(int i:b){
            cout <<i<< " ";
      }cout<< endl;
      


      cout << "Capacity: " << v.capacity() <<endl; //capacity = 0,1,2,4,8,16,32 ......etc,

      v.push_back(1);
      cout << "Capacity: " << v.capacity() <<endl;

      v.push_back(2);
      cout << "Capacity: " << v.capacity() <<endl;

      v.push_back(3);
      cout << "Capacity: " << v.capacity() <<endl;
      cout << "Size: " << v.size() <<endl;

      v.push_back(4);
      cout << "Capacity: " << v.capacity() <<endl;
      cout << "Size: " << v.size() <<endl;

      v.push_back(5);
      cout << "Capacity: " << v.capacity() <<endl;
      cout << "Size: " << v.size() <<endl;
      for(int i:v){
            cout<<i<<" ";
      }cout<<endl;


      cout<<"Before pop back: ";
      for(int i:v){
            cout<<i<<" ";
      }cout<<endl;

      cout<<"After pop back: ";
      v.pop_back();  //removes last element
      for(int i:v){
            cout<<i<<" ";
      }cout<<endl; 

      cout<< " Element at index 2: "<<v.at(2)<<endl;

      v.clear();
      cout<<"After clear: "<< v.size() << endl;

}