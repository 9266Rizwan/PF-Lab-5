#include <iostream>
#include <cmath>
using namespace std;
float height(float distance,float degree);

main()
{

	system("cls");
	float distance;
	float degree;
	float result;
	cout <<"Enter distance : " ;
	cin >> distance;
	cout <<"Enter degree   : " ;
	cin >> degree;
	result=height(distance,degree);
	cout << "Height of the object is = " << result << endl ;
}

float height(float distance,float degree)
{
	float radians;
	float angle;
	radians=(degree/57.2958);
	angle = tan(radians);
	float height=distance* angle;
	return height;
}