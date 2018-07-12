/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 23rd, 2018, 7:00 PM
 * Purpose:  Annual Pay
 *           Find the annual pay of an employee.
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int payAmount;
    int payPeriods;
    int annualPay;
    //Initial Variables
    payAmount = 2200;
    payPeriods = 26;
    annualPay = payAmount*payPeriods;
    //Map/Process Inputs to Outputs
    cout << "This employees annual pay is $" <<annualPay <<".";
    //Exit program!
    return 0;
}