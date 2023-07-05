#include <iostream>

void debug() {
    std::string info;
    while (true) {
        std::cout << "Debug>>";
        std::cin >> info;
        /*if(info=="tpid")
        {
                cout<<"Name:";
                string n;
                cin>>n;
                cout<<typeid(n)<<endl;
        }*/
        if (info == "exit") {
            return;
        } else {
            std::cout << "Illegal command." << std::endl;
        }
        std::cout << std::endl;
    }
}