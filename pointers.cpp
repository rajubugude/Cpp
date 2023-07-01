#include <bits/stdc++.h>
using namespace std;

// int main(){
//       int num = 5;
//       // cout << num << endl;

//       // address operator &-ampersand
//       // cout << &num << endl;


//       // pointer stores address


//       // int *ptr  => this is a syntax to create a pointer, here ptr is a pointer to integer
//       // char *ptr => this is a syntax to create a pointer, here ptr is a pointer to character
//       int *ptr = &num; //pointer declaration

//       cout << ptr << endl; // gives address of pointer
//       cout << *ptr << endl; //gives value stored in that address i.e, here de refrencing 

//       cout << &ptr << endl;
//       cout << &*ptr << endl;
// }





int main() {
    int num = 5;
    cout << num << endl;

    int* ptr = &num;
    int a = num;


    a++; // increment with variable
    cout << "Before Increment the pointer value is: " << *ptr << endl;
    cout << "After Increment the value num is: " << num<< endl;


    // increment with pointer 
    (*ptr) ++;  // value at adress stored in ptr i.e, increasing
    cout << "After incrementing with pointer: " << num << endl;


    // coping the pointer
    int *q = ptr;
    cout << ptr <<" - "<< q <<endl;
    cout << *ptr <<" - "<< *q <<endl;

    return 0;
}
