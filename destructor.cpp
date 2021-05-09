///destructor is a member of the class which destructs the object once the need is over 
//it cannot be declared static on const 
//no arguments
//object ends as the function ends or the program ends or the delete operator is called!!
//syntax:: ~class_name();
#include <bits/stdc++.h>
using namespace std;

class demo_destruct{
    public:

    demo_destruct(){
    cout<<"This is the constructor for the class demo_destruct"<<endl;
    }
    //if we add another function here ? then , let's see 
    void demo(){
        cout<<"this is a demo function"<<endl;
    }
    //so the destructor is called once only 
    ~demo_destruct(){
        cout<<"This is the destructor and it would be called after the constructor has processed !!"<<endl;
    }

    
};//we have some errors XD

int main(){

    demo_destruct a1;
    a1.demo();
}
