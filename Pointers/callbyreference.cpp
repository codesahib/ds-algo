#include <iostream>
int Increment(int* x) //passing an integerpointer ie the address
{
*x=*x+1;
return *x;
}
int main()
{
int x=5;
//Increment(&x);   //6
x=Increment(&x);    //6
std::cout<<x;
return 0;
}

