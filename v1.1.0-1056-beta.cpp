#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<typeinfo>

using namespace std;

void powershell()
{
	system("powershell");
}

int login()
{
user:
	cout<<"Username:";
	string username,password;
	int admin;
	cin>>username;
	if(username=="Administractor")
	{
pass:
		cout<<"Password:";
		cin>>password;
		if(password=="2113313")
		{
			admin=1;
		}
		else
		{
			cout<<"Wrong Password."<<endl;
			goto pass;
		}
	}
	else if(username=="Guest")
	{
		admin=0;
	}
	else
	{
		goto user;
	}
	cout<<"Loading..."<<endl;
	Sleep(rand()%1000+2000);
	cout<<"\033c";
	return admin;
}

void calc()
{
	cout<<"Calculator 1.2"<<endl;
	cout<<"Type 'help' or '?' for helps."<<endl;
	cout<<endl;
	string code;
	double r,num1,num2;
	const double pi=3.14159;
	while(true)
	{
		cout<<"Calculator>>";
		cin>>code;
		cout<<endl;
		switch (code[0])
		{
			case 'h':
			{
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
			case 'c':
			{
				if (code == "cpt")
				{
					cout << "Enter 2 numbers:";
					cin >> num1 >> num2;
					cout << endl;
					cout << "Calculator>>" << "Num1+Num2=" << num1 + num2 << endl;
					cout << "Calculator>>" << "Num1-Num2=" << num1 - num2 << endl;
					cout << "Calculator>>" << "Num1*Num2=" << num1 * num2 << endl;
					cout << "Calculator>>" << "Num1/Num2=" << num1 / num2 << endl;
				}
				else if (code == "crl")
				{
					cout << "Enter the radius:";
					cin >> r;
					cout << "Calculator>>" << pi * r * r << endl;
				}
				break;
			}
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
		cout<<endl;
	}
}

void debug()
{
	string info;
	while(true)
	{
		cout<<"Debug>>";
		cin>>info;
		/*if(info=="tpid")
		{
			cout<<"Name:";
			string n;
			cin>>n;
			cout<<typeid(n)<<endl;
		}*/
		if(info=="exit")
		{
			return;
		}
		else
		{
			cout<<"Illegal command."<<endl;
		}
		cout<<endl;
	}
}

int main()
{
	int admin=login();
	srand(time(NULL));
	cout<<"VitaOS Verion 1.1"<<endl;
	cout<<"Type 'help' or '?' for helps."<<endl;
	cout<<endl;
	string code;
	while(true)
	{
		cout<<"VitaOS>>";
		cin>>code;
		cout<<endl;
		switch(code[0])
		{
			case 'h':
			{
				cout<<"Welcom to VitaOS!"<<endl;
				cout<<"Here are some common codes."<<endl;
				cout<<"----------------------------------------"<<endl;
				cout<<"help       Ask for helps."<<endl;
				cout<<"info       Know something about this program."<<endl;
				cout<<"apli       Look up available applications."<<endl;
				cout<<"exit       Exit this program."<<endl;
				cout<<"rand       Get a random number."<<endl;
				cout<<"clr        Clean the screen."<<endl;
				if(admin==1)
				{
					cout<<"----------------------------------------"<<endl;
					cout<<"restart    Restart the program."<<endl;

				}
				break;
			}
			case 'c':
			{
				switch(code[1])
				{
					case 'm':
					{
						system("cmd");
						break;
					}
					case 'l':
					{
						cout<<"\033c";
						break;
					}
					case 'a':
					{
						calc();
						break;
					}
				}
				break;
			}
			case 'i':
			{
				cout<<"VitaOS 1.1.0"<<endl;
				cout<<"Insider: Build 1056\nChannel: Beta Edition"<<endl;
				cout<<"Latest update date:2023/5/3"<<endl;
				break;
			}
			case 'a':
			{
				cout<<"These applications are available"<<endl;
				cout<<"----------------------------------------"<<endl;
				cout<<"Name            Code"<<endl;
				cout<<"Calculator      calc"<<endl;
				cout<<"Command         cmd"<<endl;
				cout<<"Powershell      powershell"<<endl;
				cout<<"Debug Center    debug "<<endl;
				break;
			}
			case 'r':
			{
				switch(code[1])
				{
					case 'e':
					{
						cout<<"\033c";
						admin=login();
						break;
					}
					case 'a':
					{
						cout<<"VitaOS>>"<<rand()<<endl;
						break;
					}
				}
				break;
			}
			case 'd':
			{
				debug();
				break;
			}
			case 'p':
			{
				powershell();
				break;
			}
			case 'e':
			{
				exit(0);
				break;
			}
			default:
			{
				cout<<"Illegal command."<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}
