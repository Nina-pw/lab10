#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan, interest, ppy;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> ppy;

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
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int i = 1;
	double  x, y, z;
	do{
	    x = loan*interest/100;
	    y = loan+x;
	    z = y-ppy;
	    if(y < ppy){
	        ppy = y;
	        z = y-ppy;
	    }
	    cout << fixed << setprecision(2); 
	    cout << setw(13) << left << i; 
	    cout << setw(13) << left << loan;
	    cout << setw(13) << left << x;
	    cout << setw(13) << left << y;
	    cout << setw(13) << left << ppy;
	    cout << setw(13) << left << z;
	    cout << "\n";
	    loan = z;
	    i++;
	}while(z > 0);
	
	
	return 0;
}