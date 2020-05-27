#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

double FoodCost = 0;
double DrinkCost = 0;

double qDrink1 = 0, qDrink2 = 0, qDrink3 = 0, qDrink4 = 0, qDrink5 = 0;
double qFood1 = 0, qFood2 = 0, qFood3 = 0, qFood4 = 0, qFood5 = 0;

class Shop {
public:



	double ItemCost=0, TipCost=0, TotalCost=0;

	double TaxRate = .0725;
	double Tax;
	double Total;
	double Tip;

	double Drink1 = 5.00;
	double Drink2 = 4.35;
	double Drink3 = 5;
	double Drink4 = 5.50;
	double Drink5 = 5.20;

	double Food1 = 5.25;
	double Food2 = 5.50;
	double Food3 = 5.75;
	double Food4 = 5.80;
	double Food5 = 6.10;

	double Amount() {
		ItemCost = DrinkCost + FoodCost;
		cout << "Item Total: $" << setprecision(2) << fixed << ItemCost << endl;
		return ItemCost;
	}

	double CalcTax() {
		Tax = (ItemCost * TaxRate);
		cout << "Tax: $" << setprecision(2)<< fixed << Tax << endl;
		cout << endl;
		return Tax;
	}

	double CalcTip() {
		cout << setw(15) <<"Tip" << endl;
		cout << "===========================" << endl;
		cout << "1- 10%" << endl;
		cout << "2- 13%" << endl;
		cout << "3- 15%" << endl;
		cout << "4- 20%" << endl;
		cout << "5- Enter an Amount:";
		cout << endl;
		cout << endl;
		cout << "Select an Number: ";

		int Choice;
		cin >> Choice;
		switch (Choice) {
		case 1:
			Tip = .10 * ItemCost;
			break;
		case 2:
			Tip = .13 * ItemCost;
			break;
		case 3:
			Tip = .15 * ItemCost;
			break;
		case 4:
			Tip = .20 * ItemCost;
			break;
		case 5:
			double tAmount;
			cout << "Enter an Amount:";
			cin >> tAmount;
			Tip = tAmount;
			break;
		}
		cout << "You tipped: $" <<setprecision(2)<< fixed << Tip << endl;
		return Tip;
	}

	double CalcTotal() {
		Total=ItemCost + Tax + Tip;
		cout << "Total: $" << setprecision(2) << fixed << Total << endl;
		cout << endl;
		return Total;
	}

	void CalcChange() {
		cout << "Enter Cash: $";
		double Cash=0;
		cin >> Cash;
		double Change = Cash - Total;
		if (Change > 0) {
			cout << "Change Due = $" << fixed << setprecision(2) << fixed << Change << endl;
		}

		else {
			cout << "Sorry, you are $" << setprecision(2) << fixed << abs(Change) << " short." << endl;
		}
	}
};

class Drinks :public Shop {
public:

	double calcDrinks() {
		DrinkCost = (qDrink1 * Drink1) + (qDrink2 * Drink2) + (qDrink3 * Drink3) + (qDrink4 * Drink4) + (qDrink5 * Drink5);
		return DrinkCost;
	}

};

class Foods :public Shop {
public:

	double calcFoods() {
		FoodCost = (qFood1 * Food1) + (qFood2 * Food2) + (qFood3 * Food3) + (qFood4 * Food4) + (qFood5 * Food5);
		return FoodCost;
	}

};