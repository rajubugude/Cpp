#include <bits/stdc++.h>
using namespace std;

int getLength(char arr[]){
      int count = 0;
      for(int i = 0; arr[i] != '\0';i ++){
            count ++;
      }
      return count;
}


char toLowerCase(char ch){
      if(ch >= 'a' && ch <= 'z'){
            return ch;
      }
      else{
            char temp = ch - 'A' + 'a';
            return temp;
      }
}

void reverse(char arr[],int n){
      int s,e;
      s = 0;
      e= n-1;
      while(s<=e){
            swap(arr[s++],arr[e--]);
      }
}

int compress(vector<char>& chars) {
      int cnt=1;
      int j=0;
      if(chars.size()==1)
      return 1; 
      for(int i = 1; i <= chars.size(); i++){
      cnt=1;
      while(i < chars.size() and chars[i] == chars[i-1])
      {
            cnt++; 
            i++;
      }
      chars[j++]= chars[i-1];
      if(cnt > 1){
            string c = to_string(cnt);
            for(auto ch: c){
                  chars[j++]= (char)ch;
            }
      }
      }
      return j;
}



int main(){
      char name[20];
      // cout<<" Enter your name" << endl;
      // cin >> name; 
      // cout << "You Name is "<< name << endl;
      // int length = getLength(name);
      // cout << " length of my string: "<< length<<endl;

      // reverse(name,length);
      // cout << "You Name is "<< name << endl;
      // cout<< "given character " << toLowerCase('a') << endl;
      // cout<< "given character " << toLowerCase('B') << endl;
      return 0;
}