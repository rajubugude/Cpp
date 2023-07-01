#include <bits/stdc++.h>
using namespace std;


void calculateSumRow(int arr[][4],int row,int col) {
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        cout<< sum << " ";
    }
}


void calculateSumCol(int arr[][4],int row,int col) {
    for (int i = 0; i < col; i++) {
        int sum = 0;
        for (int j = 0; j < row; j++) {
            sum += arr[j][i];
        }
        cout<< sum << " ";
    }
}

int largestRowSum(int arr[][4],int row,int col) {
      int maxi = 0;
      for (int i = 0; i < row; i++) {
            int sum = 0;
            for (int j = 0; j < col; j++) {
                sum += arr[i][j];
            }
            if (sum > maxi) {
                maxi = sum;
            }
        }
        return maxi;
}



int main() {
      //create 2D array
      // int arr[3][4];
      // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
      int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};


      // input taking  row wise approach

      // for (int i = 0; i < 3; i++) {
      //       for (int j = 0; j < 4; j++) {
      //             cin >> arr[i][j];
      //       }
      // }


      // input taking  column wise approach

      // for (int col = 0; col < 4; col++) {
      //       for (int row = 0; row < 3; row++) {
      //             cin >> arr[row][col];
      //       }
      // }



      //outputting
      for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                  cout << arr[i][j] << " ";
            }
            cout << endl;
      }
      cout << "Row wise sum: ";
      calculateSumRow(arr, 3, 4);
      cout << endl;

      cout << "Col wise sum: ";
      calculateSumCol(arr, 3, 4);
      cout << endl;

      cout<<"Largest Row Sum: ";
      int ans = largestRowSum(arr,3,4);
      cout<< ans <<endl;

      return 0;
}