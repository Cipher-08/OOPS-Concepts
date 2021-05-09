
#include <bits/stdc++.h>
using namespace std;


int main(){
   //
/*Code here Saksham*/
    //
   int size;
   int* ptr;//called a pointer 

   cout<<"Enter the size of the array : ";
   cin>>size;

   ptr = new int[size];//allocated the size to the pointer
    cout<<"Enter the array (int form )"<<endl;
   for (int i = 0; i < size; i++)
   {
       /* code */
       cin>>ptr[i];
   }
   cout<<"The required array is :: "<<endl;
   for (int i = 0; i < size; i++)
   {
       /* code */
       cout<<ptr[i]<<" ";
   }
   
   

}
