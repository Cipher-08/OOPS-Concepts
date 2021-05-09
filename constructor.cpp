//constructor is being called automatically whenever the object is made in main function ...
//constructor is of the same type as the class name !!
//constructor do not have any return type too!!
//constrcutor are of three types :: default,parametrized ,copy!!
#include <bits/stdc++.h>
using namespace std;

class demo{
    public:
    int a,b;
    demo(){
        cout<<"This is a default constructor i.e, without any argument";
    }
    
};

int main(){
    demo a1;//This section returns the constructor as the object is being created !!

}

/////////////////////parametrized constructor 

#include <bits/stdc++.h>
using namespace std;

class demo{
    public:
    int a;
    string b;
    demo(int a1,string b1){
        a=a1;
        b=b1;

        cout<<"This is a parametrized  constructor i.e, with an argument of number as "<<a<<" and a string of  "<<b1;
    }
    
};

int main(){
    int n=3;
    string name="cypher";
    demo a1( n,name);//in this section we have called two arguments to call the constructor , so called parametrized constructor
 

}


////////////copy constructor 


#include <bits/stdc++.h>
using namespace std;

class copy_demo{
    public:
      int n,m;

    copy_demo(int n, int m){
        cout<<"this is a copy constructor with the arguments copied from another object and the arguments are as:: "<<n <<" and "<<m;
    }
};
int main(){
    copy_demo a1 = copy_demo (2,3);
    
}

