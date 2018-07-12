/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 28th, 2018, 12:57 PM
 * Purpose:  Stadium Seating
 *           Write a program that asks how many tickets per seat are sold.
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
    short A, B, C;
    double total;
    int a;
    int b;
    int c;
    //Initial Variables
    A = 15;
    B = 12;
    C = 9;
    //Map/Process Inputs to Outputs
    cout << "This program calculates the total tickets sold.\n";
    cout << "How many tickets for seats A were sold?";
    cin >> a;
    cout << "How many tickets for seats B were sold?";
    cin >> b;
    cout << "How many tickets for seats C were sold?";
    cin >> c;
    total = A*a+B*b+C*c;
    cout << "The total for all tickets sold is $" << total << ".\n";
    //Exit program!
    return 0;
}