#include <iostream>
#include <fstream>
using namespace std;

int main () {
//    ofstream outFile;
    fstream outFile;
    string outFileName = "text.txt";
//    outFile.open(outFileName);
    outFile.open(outFileName, ios::out);

    if (outFile.is_open()) {
        outFile << "Hello there" << endl;
        outFile << 123 << endl;
        outFile.close();
    }
    else {
        cout << "Could not create file: " << outFileName << endl;
    }
}