/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on July 3rd, 2018, 2:00 AM
 * Purpose:  Roman Numeral Converter
 *           Write a program that asks the user to enter a number within the
 * the range of 1 through 10. Use a switch statement to display the Roman
 * numeral version of that number.
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
    int num;
    //Initial Variables

    //Map/Process Inputs to Outputs
    cout << "Enter a number between 1 and 10: ";
    cin >> num;
    if(num < 1 || num > 10)
        cout << "The number cannot be less than 1 or greater than 10.\n\n";
    else{
        switch(num)
        {
            case 1: cout << "The Roman numeral is I \n";
            break;
            case 2: cout << "The Roman numeral is II \n";
            break;
            case 3: cout << "The Roman numeral is III \n";
            break;
            case 4: cout << "The Roman numeral is IV \n";
            break;
            case 5: cout << "The Roman numeral is V \n";
            break;
            case 6: cout << "The Roman numeral is VI \n";
            break;
            case 7: cout << "The Roman numeral is VII \n";
            break;
            case 8: cout << "The Roman numeral is VIII \n";
            break;
            case 9: cout << "The Roman numeral is IX \n";
            break;
            case 10: cout << "The Roman numeral is X \n";
            break;
            default: cout << "The number cannot be less than 1 or greater than 10.\n\n";
        }
    }
    //Exit program!
    return 0;
}