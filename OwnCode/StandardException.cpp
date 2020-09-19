#include <iostream>
using namespace std;

class StandardException {
public:
    StandardException() {
        char *pMemory = new char[999999999999];
        delete [] pMemory;
    }
};

int main() {
    try {
        StandardException wrong;
    }
    catch (bad_alloc &e) {
        cout<<"Caught exception: "<<e.what()<<endl;
    }

    cout<<"Execution completed!!"<<endl;
    return 0;
}
