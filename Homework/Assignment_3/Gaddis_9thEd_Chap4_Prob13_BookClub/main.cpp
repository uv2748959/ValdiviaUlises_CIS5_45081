/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on July 3rd 2018, 10:25 PM
 * Purpose:  Book Club Points
 *           Write a program that asks the user to enter the number of books
 * they have purchased this month then displays the number of points awarded.
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
    int book, point;
    //Initial Variables

    //Map/Process Inputs to Outputs
    cout << "Enter the number of books you have purchased this month: ";
    cin >> book;
    if(book == 0)
    {
        point = 0;
        cout << "You have earned: " << point << " points\n\n";
    }
    if(book == 1)
    {
        point = 5;
        cout << "You have earned: " << point << " points\n\n";
    }
    if(book == 2)
    {
        point = 15;
        cout << "You have earned: " << point << " points\n\n";
    }
    if(book == 3)
    {
        point = 30;
        cout << "You have earned: " << point << " points\n\n";
    }
    if(book >= 4)
    {
        point = 60;
        cout << "You have earned: " << point << " points\n\n";
    }
    else
    {
        if(book < 0)
            cout << "The number of books can't be negative. \n\n";
    }
    //Exit program!
    return 0;
}