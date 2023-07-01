#include <iostream>
#include <queue>

using namespace std;

int main(){
      //max heap
      priority_queue<int> maxiheap; //default pq is max heap

      //min heap
      priority_queue<int,vector<int> , greater<int>> miniheap;

      maxiheap.push(10);
      maxiheap.push(2);
      maxiheap.push(7);
      maxiheap.push(1);
      maxiheap.push(8);

      cout<<"size: "<<maxiheap.size()<<endl;
      int n = maxiheap.size();
      for(int i = 0; i<n; i++){
            cout<< maxiheap.top() <<" "; //max elemnt will come on top and goes on
            maxiheap.pop();
      }cout<< endl;

      miniheap.push(10);
      miniheap.push(2);
      miniheap.push(7);
      miniheap.push(1);
      miniheap.push(8);

      cout<<"size: "<<miniheap.size()<<endl;
      int m = miniheap.size();
      for(int i = 0; i<m; i++){
            cout<< miniheap.top() <<" "; //max elemnt will come on top and goes on
            miniheap.pop();
      }cout<< endl;

}