#include <iostream>
#include <cmath>
using namespace std;
float positivequadratic(float a,float b,float c);
float negativequadratic(float a,float b,float c);

main()
{
	system("cls");
	float a;
	float b;
	float c;
	float result;
	cout <<"Enter value of a : ";
	cin >> a;
	cout <<"Enter value of b : ";
	cin >> b;
	cout <<"Enter value of c : ";
	cin >> c;
	result=positivequadratic(a,b,c);
	cout << "Quadratic solution = " << result << endl ;
	result=negativequadratic(a,b,c);
	cout << "Quadratic solution = " << result << endl ;
}

float positivequadratic(float a,float b,float c)
{
	float resultb;
	float resultunder;
	float resultupper;
	float resultpositive;
	float multiply;
	
	multiply=4*a*c;
	resultb=pow(b,2);
	resultunder=sqrt(resultb-multiply);
	resultupper=-b+resultunder;
	resultpositive=resultupper/(2*a);
	return resultpositive;
}

float negativequadratic(float a,float b,float c)
{
	float resultb;
	float resultunder;
	float resultupper;
	float resultnegative;
	resultb=pow(b,2);
	resultunder=sqrt(resultb-4*a*c);
	resultupper=-b-resultunder;
	resultnegative=resultupper/(2*a);
	return resultnegative;
}
	
	