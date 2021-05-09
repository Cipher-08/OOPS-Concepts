
#include <bits/stdc++.h>
using namespace std;


int main(){
//Write your code here !

int age;
cout<<"Enter your Age"<<endl;
cin>>age;
try{
    if (age>=18)
    {
        /* code */
        cout<<"You are eligible "<<endl;
    }
    else{
        throw (505);
    }
    
}
catch(int num){
    cout<<"not eligible"<<endl;
    cout<<"Error:"<<num;
}
}
