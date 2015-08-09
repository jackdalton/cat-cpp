#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	if (argc != 2) {
		cout << "Usage:" << endl << "cat <filename>" << endl;;
		return 0;
	}
	string fileName = argv[1];
	ifstream file(fileName);
	if (file.is_open()) {
		string line;
		while (getline(file, line)) {
			cout << line << endl;
		}
	}
	else {
		cout << "Error: failed to open \"" << fileName << "\".";
		return 0;
	}
	file.close();
	return 0;
}
