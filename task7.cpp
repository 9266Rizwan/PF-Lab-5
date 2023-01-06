#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float volume;
    float pipe1;
    float pipe2;
    float hours;
    float result;
    cout << "Enter the volume of pool        :";
    cin >> volume;
    cout << "Enter the flow rate of 1st Pipe :";
    cin >> pipe1;
    cout << "Enter the flow rate of 2nd Pipe :";
    cin >> pipe2;
    cout << "Enter time of absence           :";
    cin >> hours;

    result=(pipe1*hours)+(pipe2*hours);
    if(volume>=result)
    {
        float percent=(result/volume)*100;
        float percent1=((pipe1*hours)/result)*100;
        float percent2=((pipe2*hours)/result)*100;
        cout << percent << "%" <<" percent fill "<<endl;
        cout << percent1 <<"is the contribution of Pipe 1"<<endl;
        cout << percent2 <<"is the contribution of Pipe 2"<<endl;
    }
    if(volume<result)
    {
        float over;
        over=result-volume;
        cout << "Pool over flow with " << over <<" liters";
    }

}