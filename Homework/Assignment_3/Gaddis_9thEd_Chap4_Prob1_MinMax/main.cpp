/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on July 1, 2018, 3:54 PM
 * Purpose:  Min/Max
 *           Write a program that asks the user to enter two numbers. 
 * The program should use the conditional operator to determine which number
 * is the smaller and which is the larger.
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
    double num1, num2;
   
    //Initial Variables

    //Map/Process Inputs to Outputs
    cout << "Enter two different numbers: ";
    cin >> num1 >> num2;
    if(num1 > num2)
    cout << "The larger number is: " << num1;
    else
    cout << "The larger number is: " << num2;
    //Exit program!
    return 0;
}