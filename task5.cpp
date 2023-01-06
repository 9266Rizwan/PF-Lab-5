#include <iostream>
#include <cmath>
using namespace std;
int time(int hour,int minutes,int result);
main()
{
    system("cls");
    int hour;
    int minute;
    int result;
    int minutes;
    int hours;
    cout << "Enter hours   (12,23) : ";
    cin >> hour;
    cout << "Enter minutes (50,45) : ";
    cin >> minute;
    result=(hour*60)+(minute+15);
    minutes=result%60;
    hours=result/60;
    if(hours>=24)
    {
        hours=0;
        cout << hours << " Hours & " << minutes << " minutes " ;
    }
    else
    {
        cout << hours << " Hours & " << minutes << " minutes" ;
    }
    
}