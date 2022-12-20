/*
      DATE->20/12/22
      IMPLEMENTING EMPTY CLASS TO VERIFY ITS SIZE
*/


#include <iostream>
using namespace std;

class Example 
{
    // it's a empty class with no data members
};

int main()
{
    Example obj;
    cout << "Size of empty class is: " << sizeof(obj) << endl;

    return 0;
}
