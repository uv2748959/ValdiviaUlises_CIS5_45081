/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 24th, 2018, 4:54 PM
 * Purpose:  Land Calculations
 *           Write a program that displays the total acres in a specific land.
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
    float acres;
    float land;
    float total;
    //Initial Variables
    acres = 43560;
    land = 391876;
    total = land/acres;
    //Map/Process Inputs to Outputs
    cout << "The total acres of this land is " << total;
    //Exit program!
    return 0;
}