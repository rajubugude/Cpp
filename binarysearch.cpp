#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[],int n, int target){
      int start,mid,end;
      start = 0;
      end = n-1;

      while(start <= end){
            mid = (start + end)/2;
            if(arr[mid] == target){
                  return mid;
            }
            else if(arr[mid] > target){
                  end = mid - 1;
            }
            else{
                  start = mid +1;
            }
      }
      return -1;
}


int main(){
      int even[6] = {2,5,8,11,13,16};
      int odd[7] = {2,5,8,11,13,16,19};
      
      int ans = binarySearch(odd,7,8);
      cout << ans << endl;
      return 0;



}