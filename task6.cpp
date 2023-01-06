#include <iostream>
using namespace std;

main()
{
    int number;
    int result1;
    int result2;
    cout << "Enter a number i.e.(10)";
    cin >> number;

    result2=number%10;
    result1=number/10;

    if(result1==1)
    {
        cout << "Ten" ;
    }
     if(result1==2)
    {
        cout << "Twenty" ;
    }
    if(result1==3)
    {
        cout << "Thirty" ;
    }
    if(result1==4)
    {
        cout << "Forty" ;
    }
    if(result1==5)
    {
        cout << "Fifty" ;
    }
    if(result1==6)
    {
        cout << "Sixty" ;
    }
    if(result1==7)
    {
        cout << "Seventy" ;
    }
    if(result1==8)
    {
        cout << "Eighty" ;
    }
    if(result1==9)
    {
        cout << "Ninty" ;
    }
    
    if(result2==1)
    {
        cout << "One";
    }
    if(result2==2)
    {
        cout << "Two";
    }
    if(result2==3)
    {
        cout << "Three";
    }
    if(result2==4)
    {
        cout << "Four";
    }
    if(result2==5)
    {
        cout << "Five";
    }
    if(result2==6)
    {
        cout << "Six";
    }
    if(result2==7)
    {
        cout << "Seven";
    }
    if(result2==8)
    {
        cout << "Eight";
    }
    if(result2==9)
    {
        cout << "Nine";
    }
}