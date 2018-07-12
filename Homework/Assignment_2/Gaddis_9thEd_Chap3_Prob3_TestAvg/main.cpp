/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 28th, 2018, 2:08 PM
 * Purpose:  Test Average
 *           Write a program that displays the average test scores.
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
    double test1, test2, test3, test4;
    double average;
    //Initial Variables

    //Map/Process Inputs to Outputs
    cout << "Enter the first test score:";
    cin >> test1;
    cout << "Enter the second test score:";
    cin >> test2;
    cout << "Enter the third test score:";
    cin >> test3;
    cout << "Enter the fourth test score:";
    cin >> test4;
    average = (test1 + test2 + test3 + test4)/4;
    cout << "The average score is: " << average << endl;
    //Exit program!
    return 0;
}