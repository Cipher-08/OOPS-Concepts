//Polymorphism means the repetition as the same name , such as using a function with same name 
//it could be overloading , overwitting .
// function overloading , function overwritting , operator overloading 
#include <bits/stdc++.h>
using namespace std;
 

 class polymorphism{
     public:
     void demo(){
         cout<<"A function without any parameter "<<endl;
     }
     void demo(int a1 , int b1){
         cout<<"This is the function with two parameteres in it with "<<a1<<" "<<b1<<"as parameter"<<endl;
     }
     void demo(double x){
         cout<<"This is the function with double parameter "<< x<<endl;
     }
 };

int main(){

    polymorphism a1;
    a1.demo();
    a1.demo(2,3);
    a1.demo(2.3);


}

//function overwitting

//Hi Cypher 
//Write your code here !
//Happy CODING :)
#include <bits/stdc++.h>
using namespace std;

class parent {
    public:
    int a1,a2;
    void setInfo(){
      cout<<"function called in parent class"<<endl;
     
    }
    void printInfo(){
        cout<<"function prints in parent class "<<endl;
    }
};
class child:public parent {
    public:
        void setInfo()
        {
            cout << "function called in child class"<<endl;
        }
        void printInfo()
        {
            cout << "function prints in child class "<<endl;
        }
};
int main(){
  
  parent* ptr;
  child d;
  ptr=&d;
  ptr->printInfo();
  ptr->setInfo();
  d.printInfo();
  d.setInfo();

}


