#include <iostream>
#include <string>
#include <fstream>
#include "login.h"
#include "sign_in.cpp"
using namespace std;

bool login() {
    string username, password;
    cout << "\n=== Login ===\n";
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;
    // Ganti dengan username dan password sesuai kebutuhan
    if (username == "admin" && password == "admin123") {
        cout << "Selamat datang admin!\n";
        return true;
    } else {
        cout << "Selamat datang tamu!\n";
        return false;
    }
}
