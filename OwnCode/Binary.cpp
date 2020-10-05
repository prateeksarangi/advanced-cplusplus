#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)
struct Person {
    char name[20];
    double weight;
    int age;
    double height;
};
#pragma pack(pop)

int main () {
    string fileName = "test.bin";


    // Write binary file....
    Person p = { "Prateek", 84, 21, 178 };
    fstream file;

    file.open(fileName, ios::out | ios::binary);

    if (file.is_open()) {
        file.write(reinterpret_cast<char *>(&p), sizeof(Person));
        file.close();
    }
    else {
        cout << "Could not create file: " << fileName;
    }


    // Read binary file....
    Person p1 = { };
    fstream file1;
    file1.open(fileName, ios::in | ios::binary);
    if (file1.is_open()) {
        file1.read(reinterpret_cast<char *>(&p1), sizeof(Person));
        file1.close();
    }
    else {
        cout << "Could not create file: " << fileName;
    }

    cout << p1.name << ", " << p1.age << ", " << p1.height << ", " << p1.weight << endl;
    return 0;
}