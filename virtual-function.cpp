//when we call the function from child class through parent using pointer the function would always call the function present in th eparent class , but if we use the "virtual"keyword , by which we can easily set the prefernce for the function to be callled!
#include <bits/stdc++.h>
using namespace std;


class parent {
    public:
      virtual void display(){
           cout<<"parent"<<endl;
       }
};

class child : public parent{
    public:
       void display(){
           cout<<"child"<<endl;
       }
};

int main(){
//Write your code here !

parent* a;
child b;
a=&b;
a->display();

}
