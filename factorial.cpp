#include <iostream>
using namespace std;

double answer, num;

double fact(double n) {
	if (n >= 1) {
		answer = (n * fact(n - 1));  //function calls itself
		return answer;
	}

	else {
		return 1;
	}
}

int main() {
	for (int i = 0; i < 5; i++) {
		cout << "Enter a number above 0" << endl;
		cin >> num;
		cout << num << "! is " << fact(num) << endl;
		cout << endl;
	}
	return 0;
}