#include <iostream>
using namespace std;
int function(int number);
main()
{
	system("cls");
	int number;
	int result;
	cout << "Enter a (two digit i.e 12)number : " ;
	cin >> number ;
	result=function(number);

}

int function(int number)
{
	int value;
	int result1;
	int result2;
	int result3;
	result1=number%10;
	result2=number/10;
	result3=result1+result2;

	if(result3%2==0)
	{
	  cout << "Number is evenish ";
	}
	if(result3%2==1)
	{
	  cout << "Number is oddish " ;
	}
	return 0;
}
	
