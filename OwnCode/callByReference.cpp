/*
 *
 *
 *
 * void increment ( int a ) {
 *    a = a + 1;
 *    cout<<"Address of 'a' in function increment: "<<&a<<endl;
 * }

 * int main () {
 *    int a;
 *    a = 10;
 *    increment(a);
 *    cout<<"Address of 'a' in function main: "<<&a<<endl;
 * }
 */

#include <iostream>
using namespace std;

void increment ( int a ) {
    a = a + 1;
    cout<<"Address of 'a' in function increment: "<<&a<<endl;
}

int main () {
    int a;
    a = 10;
    increment(a);
    cout<<"Address of 'a' in function main: "<<&a<<endl;
}