#include <iostream>
#include <cmath>
using namespace std;
bool isgreater(int number1);

main()
{
	system("cls");
	int number;
	bool value;
	cout << "Enter a 3-digit number (121,234) : ";
	cin >> number;
	value=isgreater(number);
	cout << "Number is Symmetric : " << value << endl ;
	
}

bool isgreater(int number)
{
	int modulus;
	int division;
	modulus=number%10;
	division=number/100;
	if(modulus==division)
	{
	 return true;
	}
	if(modulus!=division)
	{
	 return false;
	}
	return 0;
}	