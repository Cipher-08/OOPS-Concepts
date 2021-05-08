// ---Static Member ---
//Static variable makes a single storage for the function / member in a program . In other words once a member is created through staic which means you can access this as much as you can !!

#include <bits/stdc++.h>
using namespace std;

void increment (){

   static int incr =0;
   cout<<incr<<endl;
   incr++;
}

int main(){
   

   for (int i = 0; i < 5; i++)
   {
       /* code */
       increment();//if static keyword was not used then the result would be 0 0 0 0 0 as it will again begin from the starting which means the variables restarts the game and back to 1st level !!
   }
   
}

//for class 

#include <bits/stdc++.h>
using namespace std;

class demo{
    public:
    static int i;
    void simple(){
        //Just to demonstrate
    }


};
int demo::i = 1;//this should be declared outside the class as repeating static var inside a class creates codes turn to error!! which simply means dont make so much copy of static variables through multiple objects


int main(){
 
 demo a1;
cout<<a1.i;

}


