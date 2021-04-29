// DECLARING FUNCTION outside THE CLASS
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class cars{
    public:
    string model;
    void mycar(){
        
    }
};

void cars:: mycar(){
    cout<<"your car model is :- ";
    cout<<model<<endl;
}

int main(){

    cars obj;
    obj.model = "ford ecosport";
    obj.mycar();

    return 0;
}