#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int num_of_args(vector <bool> f) {
	return pow(f.size(), 1/2);
}

int main() {
	setlocale(LC_ALL, "Russian");
	vector <bool> f;
	int choice = 0;
	while (true) {
		cout << "What do you want to accomplish?" << endl;
		cout << "Task 1" << endl;
		cin >> choice;
		switch (choice) {
		case 1: {
			num_of_args(f);
			break;
		}
		default: {
			return 0;
		}
		}
	}