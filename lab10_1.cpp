#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){

	double x, y, z;
	int i = 1;

	cout << "Enter initial loan: ";
	cin >> x; 
	cout << "Enter interest rate per year (%): ";
	cin >> y;
	cout << "Enter amount you can pay per year: ";
	cin >> z;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	while(x > 0){

		double interest = x * (y/100);
		double total = x + interest;
		
		cout << fixed << setprecision(2);
		cout << setw(13) << left << i; 
		cout << setw(13) << left << x; 
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;

		if(total <= z){

			z = total;
			x = total - total;
			cout << setw(13) << left << z;
			cout << setw(13) << left << x;

			break;
 		}

		cout << setw(13) << left << z;
		x = total - z;
		cout << setw(13) << left << x;
		cout << "\n";
		i++;
	}

	return 0;
}