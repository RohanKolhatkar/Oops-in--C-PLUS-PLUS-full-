// DECLARING FUNCTION outside THE CLASS
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class cars{       // the class
    public:        // acces specifiers
    string model;     // methods

    void mycarspeed(int speed){
        cout<<"your car speed is :";
        cout<<speed;  
    }
    
};


int main(){

    cars obj;
    obj.model = "ford ecosport";
    obj.mycarspeed(34);

    return 0;
}