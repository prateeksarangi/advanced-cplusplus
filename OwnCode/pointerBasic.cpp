/*
 * Pointers - Variables that store
 * address of other variables.
 *
 * int *pi; // Pointer to integer
 * char *pc; // Pointer to character
 * p = &a; // Variable p stores the address of a
 * *p -> Gives the value of the variable whose locations p is storing, i.e., value of a
 */

#include<iostream>
using namespace std;

int main() {
    int a = 5;
    int *p;
    p = &a; // &a -> Address of a
    cout<<"Initial values\n";
    cout<<"Location of 'a' is: "<<p<<endl;
    cout<<"Location of '&a' is: "<<&a<<endl;
    cout<<"Location of '&p' is: "<<&p<<endl;
    cout<<"Pointer 'p' located to value: "<<*p<<endl;
    cout<<"Value of 'a' is: "<<a<<endl;

    *p = 8; // Deferencing
    cout<<"Modified values\n";
    cout<<"Location of 'a' is: "<<p<<endl;
    cout<<"Location of '&a' is: "<<&a<<endl;
    cout<<"Location of '&p' is: "<<&p<<endl;
    cout<<"Pointer 'p' located to value: "<<*p<<endl;
    cout<<"Value of 'a' is: "<<a<<endl;
}