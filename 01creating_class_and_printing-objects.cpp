#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class cars{   //creating a class name class
    public:  //access specifiers
    double modelNumber;
    double chasisNumber;
    string color;
    int price;

};
    
int main(){
    
    cars myobj;         // creating object of class cars
    myobj.chasisNumber = 346523432;
    myobj.modelNumber = 9727328;
    myobj.color = "blue";
    myobj.price = 34652;

//     printing the data 
    cout<<myobj.chasisNumber;
    cout<<myobj.modelNumber;
    cout<<myobj.color;
    cout<<myobj.price;
    
    return 0;
}





