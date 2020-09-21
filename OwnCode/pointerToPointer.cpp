// Pointer to Pointer

/*
 * 1. 'p' stores the address of 'x',
 *      an interger type, hence,
 *      'p' is a pointer to integer.
 * 2. 'q' stores the address of 'p',
 *      a pointer type, hence,
 *      'q' is a pointer to pointer.
 */

#include <iostream>
using namespace std;

int main () {
    int x = 5;
    int *p;
    int **q;
    int ***r;

    p = &x;
    q = &p;
    r = &q;
    cout<<"Value of 'x': "<<x<<"\n";
    cout<<"Value of 'p': "<<p<<"\n";
    cout<<"Value of 'q': "<<q<<"\n";
    cout<<"Value of 'r': "<<r<<"\n";
    cout<<endl;
    cout<<"Value of '*p': "<<*p<<"\n";
    cout<<"Value of '*q': "<<*q<<"\n";
    cout<<"Value of '*r': "<<*r<<"\n";
    cout<<endl;
    cout<<"Value of '*(*q)': "<<*(*q)<<"\n";
    cout<<"Value of '*(*r)': "<<*(*r)<<"\n";
    cout<<endl;
    cout<<"Value of '*(*(*r))': "<<*(*(*r))<<"\n";

    ***r = 10;
    cout<<"Value of 'x': "<<x<<"\n";
    cout<<"Value of 'p': "<<p<<"\n";
    cout<<"Value of 'q': "<<q<<"\n";
    cout<<"Value of 'r': "<<r<<"\n";
    cout<<endl;
    cout<<"Value of '*p': "<<*p<<"\n";
    cout<<"Value of '*q': "<<*q<<"\n";
    cout<<"Value of '*r': "<<*r<<"\n";
    cout<<endl;
    cout<<"Value of '*(*q)': "<<*(*q)<<"\n";
    cout<<"Value of '*(*r)': "<<*(*r)<<"\n";
    cout<<endl;
    cout<<"Value of '*(*(*r))': "<<*(*(*r))<<"\n";
}