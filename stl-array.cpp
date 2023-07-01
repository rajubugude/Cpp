#include <iostream>
#include<array>
using namespace std;


int main(){
      int basic[3] = {1,2,3};

      array<int, 4> arr = {2,3,5,6}; //static in nature

      int size = arr.size();

      for(int i = 0; i<size;i++){
            cout << arr[i]<< endl;

      }

      cout<< "Element at 2nd idx: " << arr.at(2) << endl;
      cout << "Empty or Not " <<arr.empty() << endl;

      cout <<"first element "<< arr.front()<< endl;
      cout <<"last element "<< arr.back()<< endl;

}