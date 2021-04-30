#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class MyClass {     
    public:           
    MyClass() {     
        cout<<"hello world";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}