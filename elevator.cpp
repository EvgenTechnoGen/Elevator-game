#include <iostream>

using namespace std;

enum mall {parking = -1, hall, many_shops, roof};

int main(int argc, const char * argv[]) {

    int level;
    bool exit = false;

	while (!exit) {
        	cout << "Enter your level (from -1 to 2): ";
       	 	cin >> level;
	switch (level) {
            case parking:
                cout << "We on the -1 level in the parking" << endl;
                break;
	    case hall:
                cout << "We on the 0 level in the hall" << endl;
                break;
	    case many_shops:
                cout << "We on the 1 level in the many_shops" << endl;
                break;
	    case roof:
                cout << "We on the 2 level in the roof" << endl;
                break;
	     default:
                cout << "Levels only from -1 to 2" << endl;
        }
	cout << "If you want to play again press 0 or press 1 to exit this game" << endl;
        cin >> exit;
    }
    