#include <iostream>
#include <fstream>
using namespace std;

int main () {
    fstream file;
    file.open("stats.txt", ios::in);

    if (!file.is_open()) {
        return 1;
    }

    while (file) {
        string line;
        getline(file, line, ':');

        int population;
        file >> population;
        file >> ws;

        if (!file) {
            break;
        }

        cout << line << " -- " << population << endl;
    }

    file.close();
    return 0;
}