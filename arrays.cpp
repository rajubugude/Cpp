#include <bits/stdc++.h>
using namespace std;


/* Array declartion

int main(){
      int arr[4] = {1,2,3,4};

      cout<< arr[1]<< endl;
      cout<< arr[2]<< endl;
      cout<< arr[3]<< endl;
      cout<< arr << endl;
      for(int i= 0;i< 4;i++){
            cout<< arr[i]<<" ";
      }
      cout <<" "<< endl;

}

*/


/*

int main(){
      int arr[5] = {10,14,9,1,7};
      int mini = 1000;
      int maxi = -1000;
      for(int i = 0;i < 5;i++){
            // if(mini>arr[i]){
            //       mini = arr[i];
            // }
            mini = min(mini,arr[i]);

            if(maxi<arr[i]){
                  maxi = arr[i];
            }

      }
      cout<<"minimum is "<<mini<<endl;
      cout<<"maximum is "<<maxi<<endl;

}

*/



/*

bool linearSearch(int arr[],int key,int size){
      for(int i=0; i< size; i++){
            if(arr[i] == key){
                  return true;
            }
      }
      return false;
}


int main(){
      int arr[8] = {4,1,2,9,6,0,5,7};
      bool ans = linearSearch(arr,11,10);
      cout<< ans<< endl;
}

*/

// void print(int arr[],int size){
//       for(int i=0; i< size;i++){
//             cout<<arr[i]<<" ";
//       }
//       cout<<endl;
// }

/* 
Reverse Array

void reverse(int arr[],int size){
      int i = 0;
      int j = size-1;
      while(i <= j){
            swap(arr[i],arr[j]);
            i+=1;
            j-=1;
      }

}

int main(){
      int arr[8] = {4,1,2,9,6,0,5,7};

      print(arr,8);
      reverse(arr,8);
      print(arr,8);
}

*/


// swap alternates

void swapAlternate(int arr[], int size){
      for(int i = 1; i< size; i++){
            if(i%2 != 0){
                  swap(arr[i],arr[i-1]);
            }
      }

}

void print(int arr[],int size){
      for(int i=0; i< size;i++){
            cout<<arr[i]<<" ";
      }
      cout<<endl;
}

int main(){
      int arr[7] = {1,2,3,4,5,6,7};
      cout<<"original array ";
      print(arr,7);
      cout<<endl;
      swapAlternate(arr,7);
      cout<<"alternate swapped array";
      print(arr,7);
      cout<<endl;

}