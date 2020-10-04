// Call by reference
/*
 * |============|
 * |            |
 * |    Heap    |
 * |            |
 * |------------|
 * |            |
 * |    Stack   |
 * |            |
 * |------------|
 * |            |
 * |   Static/  |
 * |   Global   |
 * |            |
 * |------------|
 * |            |
 * | Code(Text) |
 * |            |
 * |============|
 */

#include <iostream>
using namespace std;

//void increment ( int a ) {
//    a = a + 1;
//    cout<<"Address of 'a' in function increment: "<<&a<<endl;
//}
//
//int main () {
//    int a;
//    a = 10;
//    increment(a);
//    cout<<"Address of 'a' in function main: "<<&a<<endl;
//}

void increment ( int *a ) {
    *a = *a + 1;
    cout<<"Address of 'a' in function increment: "<<&a<<endl;
}

int main () {
    int a;
    a = 10;
    cout<<"Value of 'a' in function main: "<<a<<endl;
    increment(&a);
    cout<<"Value of 'a' in function main: "<<a<<endl;
    cout<<"Address of 'a' in function main: "<<&a<<endl;
}