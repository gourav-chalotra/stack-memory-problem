#include <iostream>
int main()
{
    // what if we can access the data of a Variable from another variable and change 
    // the value of the variable.

    /*we need to under stand that how the code will stored in the run time memory ?
    There is 2 way's in which over code will stored while run time, first using  stack, and second using heap?
    
    For example:
    when we create a Variable:

    int a = 9; (In a we store 9, this is a simple way we create a variable and this type of variables use stack memory)
    and int *ptr = 4; (In this type heap memory will store the value in a pointer *ptr, which also need to be free later on) 

    Let see the prove:
    */
   int a = 9;
   int b = 3;
//    in stack DS elements are stored in a LIFO order
    // so a , then b, and if we want to access a from b
    (*(&b)+1) = 45; // --> stack store data in contiguous memory location
    std::cout << a << endl;
    std::cout << (*(&b)+1) << endl;
    return 0;
}
