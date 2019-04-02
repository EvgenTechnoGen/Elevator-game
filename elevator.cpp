#include <iostream>

using namespace std;

enum mall {parking = -1, hall, many_shops, roof};

int main(int argc, const char * argv[]) {

    int level;
    bool exit = false;

	while (!exit) {
        	cout << "Enter your level (from -1 to 2): ";
       	 	cin >> level;