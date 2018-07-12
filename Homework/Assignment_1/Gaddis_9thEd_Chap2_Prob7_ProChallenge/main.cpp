/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 24th, 2018, 3:58 PM
 * Purpose:  Ocean levels
 *           Write a program that displays the ocean levels each year.
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
    float mmyear; //1.5 mm a year.
    int x; // x is 5 years.
    int y; // y is 7 years.
    int z; // z is 10 years.
    float result1;
    float result2;
    float result3;
    //Initial Variables
    x = 5;
    y = 7;
    z = 10;
    mmyear = 1.5;
    result1 = mmyear*x;
   result2 = mmyear*y;
    result3 = mmyear*z;
    //Map/Process Inputs to Outputs
    cout << "In 5 years it will rise " << result1 <<endl;
    cout << "In 7 years it will rise " << result2 <<endl;
    cout << "In 10 years it will rise " << result3 <<endl;
    //Exit program!
    return 0;
}