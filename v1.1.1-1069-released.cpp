#include <iostream>
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

int login()
{
user:
	cout << "Username:";
	string username, password;
	int admin;
	cin >> username;
	if (username == "Administractor")
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
	else if (username == "Guest")
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
	const double pi = 3.14159;
	while (true)
	{
		cout << "Calculator>>";
		cin >> code;
		cout << endl;
		switch (code[0])
		{
		case 'H':
		case 'h':
		case '?':
		{
			/*switch(code[1])
			{
				case
			}*/
			cout << "There are some useful commands for you." << endl;
			cout << endl;
			cout << "Command           Function" << endl;
			cout << "----------------------------------------" << endl;
			cout << "cpt               Start to compute." << endl;
			cout << "exit              Exit this application." << endl;
			cout << "crl               Compute the square of circle." << endl;
			cout << "sqrt              Square Root Calculations." << endl;
			break;
		}
		case 'C':
		case 'c':
		{
			if (code == "cpt")
			{
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
			}
			else if (code == "crl")
			{
				cout << "Enter the radius:";
				cin >> r;
				cout << "Calculator>>" << pi * r * r << endl;
			}
			break;
		}
		case 'S':
		case 's':
		{
			if (code == "sqrt")
			{
				cout << "Enter 2 numbers:";
				int n;
				cin >> n;
				cout << "Calculator>>" << sqrt(n) << endl;
			}
			break;
		}
		case 'E':
		case 'e':
		{
			if (code == "exit")
			{
				return;
			}
			break;
		}
		default:
		{
			cout << "Illegal command." << endl;
			break;
		}
		}
		cout << endl;
	}
}

void debug()
{
	string info;
	while (true)
	{
		cout << "Debug>>";
		cin >> info;
		/*if(info=="tpid")
		{
			cout<<"Name:";
			string n;
			cin>>n;
			cout<<typeid(n)<<endl;
		}*/
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
	cout << "VitaOS Verion 1.1" << endl;
	cout << "Type 'help' for helps." << endl;
	cout << endl;
	string code;
	while (true)
	{
	start_main:
		cout << "VitaOS>>";
		cin >> code;
		cout << endl;
		switch (code[0])
		{
		case 'H':
		case 'h':
		{
			switch (code[1])
			{
			case 'E':
			case 'e':
			{
				switch (code[2])
				{
				case 'L':
				case 'l':
				{
					switch (code[3])
					{
					case 'P':
					case 'p':
					{
					help_main:
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
						goto end_main;
						break;
					}
					default:
					{
						goto illegal;
					}
					}
					break;
				}
				default:
				{
					goto illegal;
				}
				}
				break;
			}
			default:
			{
				goto illegal;
			}
			}
			if (code == "?")
			{
				goto help_main;
			}
			break;
		}
		case 'C':
		case 'c':
		{
			switch (code[1])
			{
			case 'M':
			case 'm':
			{
				switch (code[2])
				{
				case 'D':
				case 'd':
				{
					system("cmd");
				}
				default:
				{
					goto illegal;
				}
				}
				break;
			}
			case 'L':
			case 'l':
			{
				switch (code[2])
				{
				case 'R':
				case 'r':
				{
					cout << "\033c";
					break;
				}
				default:
				{
					goto illegal;
				}
				}
				break;
			}
			case 'A':
			case 'a':
			{
				switch (code[2])
				{
				case 'L':
				case 'l':
				{
					switch (code[3])
					{
					case 'C':
					case 'c':
					{
						calc();
						break;
					}
					default:
					{
						goto illegal;
					}
					}
					break;
				}
				default:
				{
					goto illegal;
				}
				}
				break;
			}
			default:
			{
				goto illegal;
			}
			}
			break;
		}
		case 'I':
		case 'i':
		{
			switch (code[1])
			{
			case 'N':
			case 'n':
			{
				switch (code[2])
				{
				case 'F':
				case 'f':
				{
					switch (code[3])
					{
					case 'O':
					case 'o':
					{
						cout << "VitaOS 1.1.0" << endl;
						cout << "Insider: Build 1056\nChannel: Beta Edition" << endl;
						cout << "Latest update date:2023/5/3" << endl;
						break;
					}
					default:
					{
						goto illegal;
					}
					}
					break;
				}
				default:
				{
					goto illegal;
				}
				}
				break;
			}
			default:
			{
				goto illegal;
			}
			}
			break;
		}
		case 'A':
		case 'a':
		{
			cout << "These applications are available" << endl;
			cout << "----------------------------------------" << endl;
			cout << "Name            Code" << endl;
			cout << "Calculator      calc" << endl;
			cout << "Command         cmd" << endl;
			cout << "Powershell      powershell" << endl;
			cout << "Debug Center    debug " << endl;
			break;
		}
		case 'R':
		case 'r':
		{
			switch (code[1])
			{
			case 'E':
			case 'e':
			{
				cout << "\033c";
				admin = login();
				break;
			}
			case 'A':
			case 'a':
			{
				cout << "VitaOS>>" << rand() << endl;
				break;
			}
			}
			break;
		}
		case 'D':
		case 'd':
		{
			debug();
			break;
		}
		case 'P':
		case 'p':
		{
			powershell();
			break;
		}
		case 'E':
		case 'e':
		{
			exit(0);
			break;
		}
		default:
		{
		illegal:
			cout << "Illegal command." << endl;
		}
		}
	end_main:
		cout << endl;
	}
	return 0;
}
