#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class classmate{
    private:
        string name;
        int age;

    public:
        classmate(){
            cout<<"default constructor without parameter";
            name= "noname";
            age=0;
        }

        
        classmate(int iage){
            cout<<"constructor with age as parameter";
            name="noname";
            age=iage;
        }

        classmate(string iname){
            cout<<"constructor with name as parameter";
            age=0;
            name= iname;
            
        }


        classmate(string iname,  int iage){
            cout<<"constructor with name and age as parameter";
            age=iage;
            name=iname;

        }

        void display(){
            cout<<name<<endl<<age<<endl;
        }
};


int main(){

    classmate aditya;
    // aditya.display();

    cout<<endl;
    cout<<endl;
    cout<<endl;


    classmate anjali(15);
    return 0;
}