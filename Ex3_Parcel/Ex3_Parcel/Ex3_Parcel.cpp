/*
START
    SET parcel_fee = 8.0
    SET surcharge = 5.0
    READ weight
    IF weight > 2.0 THEN
        SET parcel_fee = parcel_fee + surcharge
        DISPLAY "Heavy parcel: RM5.00 surcharge added."
    ENDIF
    DISPLAY parcel_fee
END
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double parcel_fee = 8.0;
    double surcharge = 5.0;
    double weight;

    cout << "Enter parcel weight (Kg): ";
    cin >> weight;

    if (weight > 2.0) {
        parcel_fee = parcel_fee + surcharge;
        cout << "Heavy parcel: RM5.00 surcharge added.\n";
    }

    cout << fixed << setprecision(2);
    cout << "Your total total fee is RM" << parcel_fee << endl;

    return 0;
}

/* 
test result 
test1: 
Enter parcel weight (Kg): 1.5
Your total total fee is RM8.00

test2: 
Enter parcel weight (Kg): 2.0
Your total total fee is RM8.00

test3: 
Enter parcel weight (Kg): 2.1
Heavy parcel: RM5.00 surcharge added.
Your total total fee is RM13.00

test4: 
Enter parcel weight (Kg): 7.25
Heavy parcel: RM5.00 surcharge added.
Your total total fee is RM13.00
*/

