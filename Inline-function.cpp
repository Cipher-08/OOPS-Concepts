// --INLINE FUNCTION--

// When we use a function it takes some time as firstly the command will follow the function which was called by the function with there argument , but this is not a efficient way 
// for making clean code . So this gave birth to the Inline function as whenever an inline function is being called the whole code for the function transfers to the places where
// the fucntion is being called in the program

//////always
#include <bits/stdc++.h>
using namespace std;

inline void power (int number,int power){//this is an inline function called for demo 
    
    cout<<pow(number,power);//
    

}


int main(){

    int num, p; 
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Enter the power :";
    cin>>p;
    power(num,p);//whenever this function is being called wherever , the code from main function would automatically transfers to the called function , so called "calllee"



}
