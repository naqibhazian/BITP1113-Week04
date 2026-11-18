#include <iostream>
using namespace std;

int main()
{
    int daysLate;
    double fine = 0; // BUG 1: not initiliaze fine to 0

    cout << "Days late: ";
    cin >> daysLate;

    if (daysLate > 0) { // BUG 2: semicolon after if, should be using "{}"
        fine = daysLate * 0.50;
    }
    

    if (daysLate == 0) { // BUG 3: no "{}" BUG 4: use "=" this mean assign value, should be "==" this mean compare 
        cout << "Returned on time. No fine." << endl;
    }
        

    if (daysLate >= 14) { // BUG 5: no "{}", BUG 6: > 14 should be >= 14
        cout << "Membership suspended." << endl;
        cout << "Contact the library counter." << endl;
    }
       
    cout << "Fine: RM" << fine << endl;
    return 0;
}
