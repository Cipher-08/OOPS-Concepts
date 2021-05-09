// Transferring the property of a class through another class is called inheritance !!
//We can access all the members from the parent class to the child class  

#include <bits/stdc++.h>
using namespace std;


class parent{
    public:
    int a,b;
    void demo(){
        cout<<"this is the function called inside the parent class "<<endl;
    }

};

class child:public parent {//if we declare the parent class as private then the public members inside the parent class would become private tooo inside the child class 
    public:
    int id;

};
int main(){

    child a1;
    a1.demo();//demo function called from the parent function through child class
    a1.id = 3;
    cout<<a1.id;//id called from the child function


}
