/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 23rd, 2018, 3:54 PM
 * Purpose:  Write a program that stores integers in variables and stores the
 * sum of these two in a variable named total.
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
    int a; //a = 50
    int b; //b = 100
    int total; // amount = total
    //Initial Variables
    a = 50;
    b = 100;
    total = a+b;
    //Map/Process Inputs to Outputs
    cout <<"total = "<<total;
    //Exit program!
    return 0;
}