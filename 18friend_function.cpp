#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class human{
private:
string name;
int age;
public:
    // this is a constructor defined
    human(string iname, int iage){
        name= iname;
        age =iage;
    }

    //   this is declaration of the friend function.
    // friend function is not a member of a class.
    friend void display(human man);
};


// we need to declare  friend function outside a class.
void display(human  man){    //man is an object of the class human.
    cout<<man.name<<endl<<man.age<<endl;
}



int main(){

    human anil("anil", 45);
    human rohan("rohan", 19);  
    display(rohan);
    display(anil);

    return 0;
}