/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 24th, 2018, 4:31 PM
 * Purpose:  Miles per gallon
 *           Write a program that displays the miles per gallon.
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
    int mpg; // the Miles per Gallon
    int gal; // how many gallons the car can hold
    int driven; // how many miles driven before empty
    //Initial Variables
    gal = 15;
    driven = 375;
    mpg = driven/gal;
    //Map/Process Inputs to Outputs
    cout << "The total MPG is " << mpg;
    //Exit program!
    return 0;
}