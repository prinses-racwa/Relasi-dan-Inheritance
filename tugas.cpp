#include <iostream>
#include <string>
using namespace std;

class user {
protected:
    static int globalId;
    int id;
    string nama;
    string email;

public:
    user(string pNama, string pEmail) {
        id = generateId();
        nama = pNama;
        email = pEmail;
    }

    int generateId() {
        return ++globalId;
    }
};