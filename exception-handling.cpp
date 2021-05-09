
// #include <bits/stdc++.h>
// using namespace std;


// int main(){
// //Write your code here !

// int age;
// cout<<"Enter your Age"<<endl;
// cin>>age;
// try{
//     if (age>=18)
//     {
//         /* code */
//         cout<<"You are eligible "<<endl;
//     }
//     else{
//         throw (505);
//     }
    
// }
// catch(int num){
//     cout<<"not eligible"<<endl;
//     cout<<"Error:"<<num;
// }
// }

//Hi Cypher 
//Happy CODING :)
#include <bits/stdc++.h>
using namespace std;


int main(){
//Write your code here !
int num1,num2;
cout<<"Enter two numbers :: ";
cin>>num1>>num2;

int sum=num1+num2;

try{

  if(sum>=200){
      cout<<"Passed";
  }
  else{
      throw(505);
  }
}
catch(int num){
    cout<<"Error "<<num;
}

}
