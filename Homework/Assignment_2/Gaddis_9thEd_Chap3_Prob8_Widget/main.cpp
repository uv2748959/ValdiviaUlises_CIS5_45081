/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 28th, 2018, 11:33 PM
 * Purpose:  Widgets
 *           Write a program that widgets.
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
    double pallet, widgets, total;
    //Initial Variables
    widgets = 12.5;
    //Map/Process Inputs to Outputs
    cout << "How much does the pallet weight? ";
    cin >> pallet;
    total = pallet / widgets;
    cout << "There are a total of " << total << " widgets.";
    //Exit program!
    return 0;
}