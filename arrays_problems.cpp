 #include <bits/stdc++.h>
using namespace std;   
    
    
int equilibriumPoint(long long a[], int n) {

      vector<long long int> prefSum(n);
      vector<long long int> suffSum(n);
      // Compute prefix sum
      long long int sum = 0;
      for (int i = 0; i < n; i++) {
      sum += a[i];
      prefSum[i] = sum;
      }
      cout<< prefSum;
      // Compute suffix sum
      sum = 0;
      for (int i = n - 1; i >= 0; i--) {
      sum += a[i];
      suffSum[i] = sum;
      } 
      cout<< sufffSum;
      reverse(suffSum.begin(),suffSum.end());
      cout << suffSum;
      
      int j = 0;
      while(j<n){
      if (prefSum[j] == suffSum[j]){
            return j+1;
      }
      j++;
      }
      return -1;
}

int main(){
      long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long a[n];

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        
        cout << equilibriumPoint(a, n) << endl;
    }

    return 0;
}