/*
START 
    READ balance
    READ toll
    IF balance >= toll THEN 
        SET new balance = balance - toll 
        DISPLAY "Gate open" 
        DISPLAY new balance 
    ELSE 
        DISPLAY "Insufficient balance. Please reload."
        SET shortfall = toll - balance
        DISPLAY shortfall
    END IF
END 
*/
#include <iostream>
#include <iomanip>
using namespace std; 
int main()
{
    double balance, toll, new_balance, shortfall;

    cout << "Enter card balance: ";
    cin >> balance; 

    cout << "Enter toll amount: ";
    cin >> toll;

    cout << fixed << setprecision(2); 
    if (balance >= toll) {
        new_balance = balance - toll; 
        cout << "Gate open\n";
        cout << "New balance: RM" << new_balance << "\n";
    }
    else {
        cout << "Insufficient balance. Please reload.\n";
        shortfall = toll - balance;
        cout << "You short RM" << shortfall << "\n";
    }

    return 0;
}

/*
test case1: 
Enter card balance: 10.00
Enter toll amount: 5.30
Gate open
New balance: RM4.70

test case2: 
Enter card balance: 5.30
Enter toll amount: 5.30
Gate open
New balance: RM0.00

test case3: 
Enter card balance: 5.29
Enter toll amount: 5.30
Insufficient balance. Please reload.
You short RM0.01

test case4: 
Enter card balance: 0.00
Enter toll amount: 2.10
Insufficient balance. Please reload.
You short RM2.10
*/
