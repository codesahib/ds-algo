#include <iostream>
int Increment(int x)
{
x=x+1;
return x;
}
int main()
{
int x=5;
//Increment(x);   //5
x=Increment(x);    //6
std::cout<<x;
return 0;
}
