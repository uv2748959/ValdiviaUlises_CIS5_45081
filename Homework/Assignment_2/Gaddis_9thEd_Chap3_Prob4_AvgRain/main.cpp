/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 28th, 2018, 2:22 PM
 * Purpose:  Average Rainfall
 *           Write a program that displays average rainfall.
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
    char month1[15], month2[15], month3[15]; //Months
    double amo1, amo2, amo3; // Amount per Month
    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout << "Enter the first month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ":";
    cin >> amo1;
    cout << "Enter the second month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ":";
    cin >> amo2;
    cout << "Enter the third month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ":";
    cin >> amo3;
    cout << "The average rainfall for " << month1 << "," << month2 << ", and " 
            << month3 << " is " << (amo1+amo2+amo3)/3.0 << " inches." << endl;
    //Exit program!
    return 0;
}