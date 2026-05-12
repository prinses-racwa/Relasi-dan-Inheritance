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

int user::globalId = 0;

class member : public user {
private:
    bool status;

public:
    member(string pNama, string pEmail, bool pStatus)
        : user(pNama, pEmail) {
        status = pStatus;
    }

    void showProfile() {
        cout << "ID     : " << id << endl;
        cout << "Nama   : " << nama << endl;
        cout << "Email  : " << email << endl;
        cout << "Status : " << (status ? "Aktif" : "Nonaktif") << endl;
    }

    void setStatus(bool pStatus) {
        status = pStatus;
    }

    bool getStatus() {
        return status;
    }
};