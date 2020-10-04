#include <iostream>
#include <fstream>
using namespace std;

int main () {
    string inFileName = "text.txt";
    fstream inFile;
    string line;

    inFile.open(inFileName, ios::in);

    if (inFile.is_open()) {
        while (!inFile.eof()) {
            getline(inFile, line);
            cout << line << endl;
        }
        inFile.close();
    }
    else {
        cout << "Can't open the file: " << inFileName << endl;
    }
}