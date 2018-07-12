/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 28th, 2018, 12:42 PM
 * Purpose:  Write a program for MPG
 *           Write a program that displays MPG.
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
    int mil, gal, MPG;
    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout << "This program calculates the MPG of a vehicle.\n";
    cout << "What is the miles that the car has driven?";
    cin >> mil;
    cout << "What is the total gallons that the vehicle could hold?";
    cin >> gal;
    MPG = mil/gal;
    cout << "The MPG of a vehicle is " << MPG << ".\n";
    //Exit program!
    return 0;
}