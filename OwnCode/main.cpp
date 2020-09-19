#include<iostream>
using namespace std;

void mightGoWrong() {
    bool error1 = false;
    bool error2 = true;

    if (error1) {
        throw "Some error occured!!";
    }

    if (error2) {
        throw string("Something went wrong!!");
    }
}

void useMightGoWrong() {
    mightGoWrong();
}

int main() {
    try {
        useMightGoWrong();
    }
    catch (int e) {
        cout<<"Error code: "<<e<<endl;
    }
    catch (char const* e) {
        cout<<"Error message: "<<e<<endl;
    }
    catch (string &e) {
        cout<<"String error message: "<<e<<endl;
    }

    cout<<"Still running, Execution completed!!"<<endl;

    return 0;
}
