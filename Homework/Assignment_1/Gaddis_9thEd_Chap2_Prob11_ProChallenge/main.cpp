/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 24th, 2018, 3:54 PM
 * Purpose:  Distance per Tank of Gas
 *           Write a program that displays how far a car can go in a full tank
 * of gas.
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
    float aveMiles;
    int gasTank;
    float Dis;
    //Initial Variables
    aveMiles = 26.2;
    gasTank = 20;
    Dis = aveMiles*gasTank;
    //Map/Process Inputs to Outputs
    cout << "The total distance that this car can travel is " << Dis << " miles.";
    //Exit program!
    return 0;
}