#include <windows.h>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

#include "debug.h"
#include "file.h"

using namespace std;

int login() {
    string username, password;
    int admin;
    while (1) {
        cout << "Username: ";

        cin >> username;
        transform(username.begin(), username.end(), username.begin(),
                  [](unsigned char c) { return tolower(c); });
        if (username == "Administractor") {
            cout << "Password: ";
            cin >> password;
            if (password == "2113313") {
                admin = 1;
                break;
            } else {
                cout << "Wrong Password." << endl;
            }
        } else if (username == "Guest") {
            admin = 0;
			break;
        }
    }
    cout << "Loading..." << endl;
    Sleep(rand() % 1000);
    cout << "\033c";
    return admin;
}

void calc() {
    cout << "Calculator 1.2" << endl;
    cout << "Type 'help' or '?' for helps." << endl;
    cout << endl;
    string code;
    double r, num1, num2;
    const double pi = 3.14159;
    while (true) {
        cout << "Calculator>>";
        cin >> code;
        cout << endl;
        if (code == "help" || code == "?") {
            cout << "There are some useful commands for you." << endl;
            cout << endl;
            cout << "Command           Function" << endl;
            cout << "----------------------------------------" << endl;
            cout << "cpt               Start to compute." << endl;
            cout << "exit              Exit this application." << endl;
            cout << "crl               Compute the square of circle." << endl;
            cout << "sqrt              Square Root Calculations." << endl;
        } else if (code == "cpt") {
            cout << "Enter 2 numbers:";
            cin >> num1 >> num2;
            cout << endl;
            cout << "Calculator>>"
                 << "Num1+Num2=" << num1 + num2 << endl;
            cout << "Calculator>>"
                 << "Num1-Num2=" << num1 - num2 << endl;
            cout << "Calculator>>"
                 << "Num1*Num2=" << num1 * num2 << endl;
            cout << "Calculator>>"
                 << "Num1/Num2=" << num1 / num2 << endl;
        } else if (code == "crl") {
            cout << "Enter the radius:";
            cin >> r;
            cout << "Calculator>>" << pi * r * r << endl;
        } else if (code == "sqrt") {
            cout << "Enter 2 numbers:";
            int n;
            cin >> n;
            cout << "Calculator>>" << sqrt(n) << endl;
        } else if (code == "exit") {
            return;
        } else {
            cout << "Illegal command." << endl;
        }
        cout << endl;
        return;
    }
}

int main() {
    int admin = login();
    srand(time(NULL));
    cout << "VitaOS Verion 1.2" << endl;
    cout << "Type 'help' for helps." << endl;
    cout << endl;
    string code;
    while (true) {
    start_main:
        cout << "VitaOS>>";
        cin >> code;
        cout << endl;
        if (code == "help" || code == "?") {
            cout << "Welcom to VitaOS!" << endl;
            cout << "Here are some common codes." << endl;
            cout << "----------------------------------------" << endl;
            cout << "help       Ask for helps." << endl;
            cout << "info       Know something about this program." << endl;
            cout << "applist    Look up available applications." << endl;
            cout << "exit       Exit this program." << endl;
            cout << "rand       Get a random number." << endl;
            cout << "clr        Clean the screen." << endl;
            if (admin == 1) {
                cout << "----------------------------------------" << endl;
                cout << "restart    Restart the program." << endl;
            }
        } else if (code == "cmd") {
            system("cmd");
        } else if (code == "clr") {
            cout << "\033c";
        } else if (code == "calc") {
            calc();
        } else if (code == "info") {
            cout << "VitaOS 1.2.0" << endl;
            cout << "Insider: Build 1169\nChannel: Beta Edition" << endl;
            cout << "Latest update date:2023/6/28" << endl;
        } else if (code == "applist") {
            cout << "These applications are available" << endl;
            cout << "----------------------------------------" << endl;
            cout << "Name            Code" << endl;
            cout << "Calculator      calc" << endl;
            cout << "Command         cmd" << endl;
            cout << "Powershell      powershell" << endl;
            cout << "Debug Center    debug " << endl;
        } else if (code == "rand") {
            cout << "VitaOS>>" << rand() << endl;
        } else if (code == "restart") {
            cout << "\033c";
            admin = login();
        } else if (code == "debug") {
            debug();
        } else if (code == "exit") {
            return 0;
        } else {
            cout << "Illegal command." << endl;
        }
        cout << endl;
    }
    return 0;
}