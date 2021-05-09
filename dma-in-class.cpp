/* Hi Cypher */
/*Happy CODING :) */
#include <bits/stdc++.h>
using namespace std;

class box
{
public:
    box()
    {
        cout << "constructor" << endl;
    }
    ~box()
    {
        cout << "destructor" << endl;
    }
};

int main()
{
    //
    /*Code here Saksham*/
    //

    box *arr = new box[4];
    delete[] arr;
}
