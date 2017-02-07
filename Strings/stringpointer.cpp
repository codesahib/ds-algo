#include <iostream>
#include <string.h>

int main(){
char S[20]="Gursahib Singh56789";

char* SP;
SP=S; //copies the array but  valid for pointer because S contains base address
//S=SP //error char* to char
std::cout<<S;
}
