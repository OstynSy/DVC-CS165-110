#include "Parent.h"
//Ostyn Sy
//1661304
//POS(Point of Sale) for bubble tea shop

int main() {
	Drinks MilkTea;
	Foods Munch;
	Shop Item;

	cout << setw(14) <<"Menu" << endl;
	cout << "===========================" << endl;
	cout << endl;
	cout << "Drinks" << endl;
	cout << "---------------------------" << endl;
	cout << "1-Oolong Milk Tea" << setw(10)<<"$5.00"<<endl;
	cout << "2-Thai Milk Tea" << setw(12) << "$4.35" << endl;
	cout << "3-Jasmine Milk Tea" << setw(9) << "$5.00" << endl;
	cout << "4-Hokkaido Milk Tea" << setw(8) << "$5.50" << endl;
	cout << "5-Jade Milk Tea" << setw(12) << "$5.20" << endl;
	cout << endl;
	cout <<"Food" << endl;
	cout << "---------------------------" << endl;
	cout << "6-Popcorn Chicken" << right << setw(10) << "$5.25" << endl;
	cout << "7-Takoyaki" << setw(17) << "$5.50" << endl;
	cout << "8-King Oysters" << setw(13) << "$5.75" << endl;
	cout << "9-Chicken Strips" << setw(11) << "$5.80" << endl;
	cout << "10-Tofu Cubes" << setw(14) << "$6.10" << endl;
	cout << endl;
	cout <<setw(40)<< "0-Checkout" << endl;
	cout << endl;
	cout << "===========================" << endl;
	cout << endl;
	int ItemNumber=0;

	while (ItemNumber >= 0) {
		cout << "Item Number: ";
		cin >> ItemNumber;
		cin.ignore();

			switch (ItemNumber) {
			case 0:
				cout << endl;
				cout << "Cart" << endl;
				cout << "===========================" << endl;
				cout << "Oolong Milk Tea:" << setw(11) << qDrink1 << endl;
				cout << "Thai Milk Tea:" << setw(13) << qDrink2 << endl;
				cout << "Jasmine Milk Tea:" << setw(10) << qDrink3 << endl;
				cout << "Hokkaido Milk Tea:" << setw(9) << qDrink4 << endl;
				cout << "Jade Milk Tea:" << setw(13) << qDrink5 << endl;
				cout << endl;
				cout << "Popcorn Chicken: " << setw(10) << qFood1 << endl;
				cout << "Takoyaki: " << setw(17) << qFood2 << endl;
				cout << "King Oysters: " << setw(13) << qFood3 << endl;
				cout << "Chicken Strips: " << setw(11) << qFood4 << endl;
				cout << "Tofu Cubes: " << setw(15) << qFood5 << endl;
				cout << "===========================" << endl;
				cout << endl;

				MilkTea.calcDrinks();
				Munch.calcFoods();
				Item.Amount();
				Item.CalcTax();
				Item.CalcTip();
				Item.CalcTotal();
				Item.CalcChange();

				return 0;
			case 1:
				qDrink1++;
				break;
			case 2:
				qDrink2++;
				break;

			case 3:
				qDrink3++;
				break;
			case 4:
				qDrink4++;
				break;
			case 5:
				qDrink5++;
				break;
			case 6:
				qFood1++;
				break;
			case 7:
				qFood2++;
				break;
			case 8:
				qFood3++;
				break;
			case 9:
				qFood4++;
				break;
			case 10:
				qFood5++;
				break;
			default:
				cout << "Please enter a number between (0-10)." << endl;
				break;
			}		
		}
		return 0;
}