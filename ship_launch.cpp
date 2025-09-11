#include "space_ship.h"
#include <string>

using namespace std;


string RED = "\033[1;31m";
string GREEN = "\033[1;32m";
string RESET = "\033[0m";

string checkStatus(string component, bool status) {
    return component + ": [" + (status ? GREEN + "READY" : RED + "NOT READY") + RESET + "]";
}

int main(){
    cout << "Space Ship Launch Checklist" << endl;
    cout << "--------------------------" << endl;
    cout << checkStatus("Engines", engines()) << endl;
    cout << checkStatus("Weapons", weapons()) << endl;
    cout << checkStatus("Shields", shields()) << endl;
    cout << checkStatus("Thrusters", thrusters()) << endl;
    cout << checkStatus("Communications", comms()) << endl;
    cout << checkStatus("Life Support", life_support()) << endl;
    cout << checkStatus("Navigation", navigation()) << endl;

    // abort mission if any system is not ready
    if (!(engines() && weapons() && shields() && thrusters() && comms() && life_support() && navigation())) {
        cout << RED + "Launch aborted: All systems must be READY." + RESET << endl;
        return 1;
    }

    // commence countdown here!
    for (int i = 3; i > 0; i--) {
        cout << "T-minus " << i << " seconds" << endl;
    }
    cout << GREEN + "Blast off!" + RESET << endl;

    return 0;
}