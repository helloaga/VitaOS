#include <iostream>  // 引入iostream库，用于输入输出操作
#include <string>    // 引入string库，用于string类的定义及处理
#include <algorithm> // 引入algorithm库，用于字符串转化为小写字母操作
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <typeinfo>

using namespace std;

void powershell()
{
    system("powershell");
}

void ill()
{
    cout << "Illegal command." << endl;
}

int login()
{
user:
    cout << "Username:";
    string username, password;
    int admin;
    cin >> username;
    transform(username.begin(), username.end(), username.begin(), [](unsigned char c)
              { return tolower(c); });
    if (username == "administractor")
    {
    pass:
        cout << "Password:";
        cin >> password;
        if (password == "2113313")
        {
            admin = 1;
        }
        else
        {
            cout << "Wrong Password." << endl;
            goto pass;
        }
    }
    else if (username == "guest")
    {
        admin = 0;
    }
    else
    {
        goto user;
    }
    cout << "Loading..." << endl;
    Sleep(rand() % 1000 + 2000);
    cout << "\033c";
    return admin;
}

void calc()
{
    cout << "Calculator 1.2" << endl;
    cout << "Type 'help' or '?' for helps." << endl;
    cout << endl;
    string code;
    double r, num1, num2;

    while (true)
    {
        cout << "Calculator>>";
        cin >> code;
        cout << endl;
        transform(code.begin(), code.end(), code.begin(), [](unsigned char c)
                  { return tolower(c); }); // 将字符串转化为小写字母
        switch (code.compare("help"))      // 将code与help比较，若相同，则返回值0
        {
        case 0:
            cout << "There are some useful commands for you." << endl;
            cout << endl;
            cout << "Command           Function" << endl;
            cout << "----------------------------------------" << endl;
            cout << "cpt               Start to compute." << endl;
            cout << "exit              Exit this application." << endl;
            cout << "crl               Compute the square of circle." << endl;
            cout << "sqrt              Square Root Calculations." << endl;
            cout << endl;
            continue;
        }
        switch (code.compare("cpt"))
        {
        case 0:
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
            cout << endl;
            continue;
        }
        const double pi = 3.14159; // 定义Pi的值
        switch (code.compare("crl"))
        {
        case 0:
            cout << "Enter the radius:";
            cin >> r;
            cout << "Calculator>>" << pi * r * r << endl;
            cout << endl;
            continue;
        }
        switch (code.compare("sqrt"))
        {
        case 0:
            cout << "Enter 2 numbers:";
            int n;
            cin >> n;
            cout << "Calculator>>" << sqrt(n) << endl;
            cout << endl;
            continue;
        }
        switch (code.compare("exit"))
        {
        case 0:
            return;
        }
    }
    cout << endl;
}

void debug()
{
    string info;
    while (true)
    {
        cout << "Debug>>";
        cin >> info;
        if (info == "exit")
        {
            return;
        }
        else
        {
            cout << "Illegal command." << endl;
        }
        cout << endl;
    }
}

int main()
{
    int admin = login();
    srand(time(NULL));
    cout << "VitaOS Verion 1.1.2" << endl;
    cout << "Type 'help' for helps." << endl;
    cout << endl;
    string code;
    while (true)
    {
    start_main:
        /*int num = 0; // 计算错误次数*/
        cout << "VitaOS>>";
        cin >> code;
        transform(code.begin(), code.end(), code.begin(), [](unsigned char c)
                  { return tolower(c); });
        cout << endl;
        switch (code.compare("help"))
        {
        case 0:
            cout << "Welcom to VitaOS!" << endl;
            cout << "Here are some common codes." << endl;
            cout << "----------------------------------------" << endl;
            cout << "help       Ask for helps." << endl;
            cout << "info       Know something about this program." << endl;
            cout << "apli       Look up available applications." << endl;
            cout << "exit       Exit this program." << endl;
            cout << "rand       Get a random number." << endl;
            cout << "clr        Clean the screen." << endl;
            if (admin == 1)
            {
                cout << "----------------------------------------" << endl;
                cout << "restart    Restart the program." << endl;
            }
            cout << endl;
            continue;
        }
        switch (code.compare("cmd"))
        {
        case 0:
            system("cmd");
            cout << endl;
            continue;
        }
        switch (code.compare("clr"))
        {
        case 0:
            cout << "\033c";
            cout << endl;
            continue;
        }
        switch (code.compare("calc"))
        {
        case 0:

            calc();
            cout << endl;
            continue;
        }
        switch (code.compare("info"))
        {
        case 0:
            cout << "VitaOS 1.1.3" << endl;
            cout << "Insider: Build 1105\nChannel: Beta Edition" << endl;
            cout << "Latest update date:2023/5/20" << endl;
            cout << endl;
            continue;
        }
        switch (code.compare("apli"))
        {
        case 0:
            cout << "These applications are available." << endl;
            cout << "----------------------------------------" << endl;
            cout << "Name            Code" << endl;
            cout << "Calculator      calc" << endl;
            cout << "Command         cmd" << endl;
            cout << "Powershell      powershell" << endl;
            cout << "Debug Center    debug " << endl;
            cout << endl;
            continue;
        }
        switch (code.compare("restart"))
        {
        case 0:
            cout << "\033c";
            admin = login();
            cout << endl;
            continue;
        }
        switch (code.compare("rand"))
        {
        case 0:
            cout << "VitaOS>>" << rand() << endl;
            cout << endl;
            continue;
        }
        switch (code.compare("debug"))
        {
        case 0:
            debug();
            cout << endl;
            continue;
        }
        switch (code.compare("powershell"))
        {
        case 0:
            powershell();
            cout << endl;
            continue;
        }
        switch (code.compare("exit"))
        {
        case 0:
            exit(0);
            cout << endl;
            continue;
        }
        cout << "Invaild Command." << endl;
        cout << endl;
    }
    return 0;
}