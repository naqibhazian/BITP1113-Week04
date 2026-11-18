/*
START 
    READ hour (0-23)
    IF hour >= 23 || hour < 6 THEN 
        DISPLAY "Late entry: sign the log book"
        DISPLAY "Show your matric card"
    ELSE 
        DISPLAY "Welcome back" 
    END IF 
    DISPLAY "Good night"

STOP 
*/

#include <iostream>
using namespace std;

int main()
{
    int hour;
    cout << "Hour (0-23): ";
    cin >> hour;

    if (hour >= 23 || hour < 6) {
        cout << "Late entry: sign the log book\n";
        cout << "Show your matric card\n";
    }
    else {
        cout << "Welcome back\n";
    }
    cout << "Good night\n";

    return 0;
}


