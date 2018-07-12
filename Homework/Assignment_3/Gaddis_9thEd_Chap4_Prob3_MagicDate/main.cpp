/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on July 3rd, 2018, 2:13 AM
 * Purpose:  Magic Dates
 *           Write a program that asks the user to enter a month, a day, and a two digit year.
 * The program should then determine whether the month times the day is equal to the year
 * If so, it should display a message saying the date is magic.
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
    int month, day, year;
    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout << "Enter a month: ";
    cin >> month;
    cout << "Enter a day: ";
    cin >> day;
    cout << "Enter a year(two-digit): ";
    cin >> year;
    cout << "Magic Dates: ";
    if(month*day==year)
        cout << "This date is Magic \n\n";
    else
        cout << "This date is not Magic \n\n";
    //Exit program!
    return 0;
}