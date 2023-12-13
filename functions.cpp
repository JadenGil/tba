//
// Created by jaden.gilmond on 12/1/2023.
//
#include "functions.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void print(std::string str) {
    std::cout << str << std::endl;
}

void printtext(){
    cout << "What would you like to do? Enter the number of your choice:" << endl;
    cout << "[1] Walk towards Pam with confidence and offer to purchase her next round." << endl;
    cout << "[2] Walk towards Pam but you're clearly nervous, and it's obvious." << endl;
    cout << "[3] Exit the tavern." << endl;
}

void printfilecontent(string filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file ";
    }

}

void pt1(string filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file ";
    }

}

void gm(string filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file ";
    }
}

void pt2(string filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file ";
    }
}

void pt3(string filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file ";
    }
}

void pt4(string filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file ";
    }
}

void pt5(string filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file ";
    }
}