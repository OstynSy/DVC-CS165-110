#include <iostream>
using namespace std;

class Animals {//base class
public:

	void Type(string name) {
		cout << "I am a " << name << endl;
	}

	void display() {//display animal features
		Eat();
		Walk();
		Communicate();
	}

	void Eat() {
		cout << "I eat food!" << endl;//Eat Feature
	}

	void Walk() {
		cout << "I can walk!" << endl;//Walk Feature
	}

	void Communicate(){
		cout << "I can talk!" << endl;//Talk Feature
	}
};

class Monkey :public Animals { //Monkey Unique Features
public:

	void Climb() {
		cout << "I can climb!" << endl;
		cout << endl;
	}
};

class Tiger :public Animals {//Tiger Unique Features
public:
	void Fast() {
		cout << "I am very fast!" << endl;
		cout << endl;
	}
};

class Sloth :public Animals {//Sloth Unique Feature
public:
	void slow() {
		cout << "I am super slow!" << endl;
		cout << endl;
	}
};

int main() {
	Monkey M;
	Tiger T;
	Sloth S;

	M.Type("Monkey");
	M.display();
	M.Climb();

	T.Type("Tiger");
	T.display();
	T.Fast();

	S.Type("Sloth");
	S.display();
	S.slow();

	return 0;
}