/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 28th, 2018, 10:42 PM
 * Purpose:  Celsius to Fahrenheit
 *           Write a program that converts Celsius to Fharenheit.
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
    double C, conver;
    //Initial Variables

    //Map/Process Inputs to Outputs
    cout <<"Enter Celsius temp: ";
    cin >> C;
    conver = (1.8*C) + 32;
    cout << C << " Celsius = " << conver << " Fahrenheit\n";
    //Exit program!
    return 0;
}