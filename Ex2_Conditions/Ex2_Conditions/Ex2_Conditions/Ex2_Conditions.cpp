/*
predictions case1:
battery: 15
charging: 0
battery < 20: 1
battery < 20 && !charging: 1
battery == 100 || charging: 0
battery >= 0 && battery <= 100: 1
0 <= battery <= 100: 1

actual output:
battery: 15
charging: 0
battery < 20: 1
battery < 20 && !charging: 1
battery == 100 || charging: 0
battery >= 0 && battery <= 100: 1
0 <= battery <= 100: 1

predictions case2:
battery: 15
charging: 1
battery < 20: 1
battery < 20 && !charging: 0
battery == 100 || charging: 1
battery >= 0 && battery <= 100: 1
0 <= battery <= 100: 1

actual output:
battery: 15
charging: 1
battery < 20: 1
battery < 20 && !charging: 0
battery == 100 || charging: 1
battery >= 0 && battery <= 100: 1
0 <= battery <= 100: 1

predictions case3:
battery: 100
charging: 0
battery < 20: 0
battery < 20 && !charging: 0
battery == 100 || charging: 1
battery >= 0 && battery <= 100: 1
0 <= battery <= 100: 1

actual output:
battery: 100
charging: 0
battery < 20: 0
battery < 20 && !charging: 0
battery == 100 || charging: 1
battery >= 0 && battery <= 100: 1
0 <= battery <= 100: 1

predictions case4:
battery: 150
charging: 0
battery < 20: 0
battery < 20 && !charging: 0
battery == 100 || charging: 0
battery >= 0 && battery <= 100: 0
0 <= battery <= 100: 1

actual output:
battery: 150
charging: 0
battery < 20: 0
battery < 20 && !charging: 0
battery == 100 || charging: 0
battery >= 0 && battery <= 100: 0
0 <= battery <= 100: 1

predictions case5:
battery: -5
charging: 1
battery < 20: 1
battery < 20 && !charging: 0
battery == 100 || charging: 1
battery >= 0 && battery <= 100: 0
0 <= battery <= 100: 1

actual output:
battery: -5
charging: 1
battery < 20: 1
battery < 20 && !charging: 0
battery == 100 || charging: 1
battery >= 0 && battery <= 100: 0
0 <= battery <= 100: 1


*/

#include <iostream>
using namespace std;

int main()
{
    int battery, charging;

    cout << "battery: ";
    cin >> battery;

    cout << "charging: ";
    cin >> charging;

    cout << "battery < 20: " << (battery < 20) << endl;
    cout << "battery < 20 && !charging: " << (battery < 20 && !charging) << endl;
    cout << "battery == 100 || charging: " << (battery == 100 || charging) << endl;
    cout << "battery >= 0 && battery <= 100: " << (battery >= 0 && battery <= 100) << endl;
    cout << "0 <= battery <= 100: " << (0 <= battery <= 100) << endl;
    // c++ reads chained retional operators from left to right, eg. battery = 15 
    // step 1: 0 <= 15 evaluate to true, the we converts it to 1 
    // step 2: 1 <= 100 evaluate to true, answer is 1 
    // 2nd eg. battery = -5 
    // step 1: 0 <= -5 evaluate to false, the we converts it to 0 
    // step 2: 0 <= 100 evaluate to true, answer is 1 

    return 0;
}