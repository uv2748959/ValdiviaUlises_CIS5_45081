/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on July 3rd, 2018, 9:58 PM
 * Purpose:  Change for a Dollar Game
 *           The program should ask the user to enter the number of pennies, nickels, dimes, and quarters.
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
    double pen, nic, dim, quar, tot;
    //Initial Variables

    //Map/Process Inputs to Outputs
    cout << "Enter the number of pennies: ";
    cin >> pen;
    cout << "Enter the number of nickels: ";
    cin >> nic;
    cout << "Enter the number of dimes: ";
    cin >> dim;
    cout << "Enter the number of quarters: ";
    cin >> quar;
    
    tot = (pen*0.01)+(nic*0.05)+(dim*0.10)+(quar*0.25);
    
    if(tot == 1.00)
        cout << "Congrats, you've entered exactly $1. ";
    else
    {
        if(tot < 1.00 && tot > 0)
        {
            cout << "You entered less than $1. Try again. ";
        }
        else
        {
            if(tot > 1.00)
            {
                cout << "You entered more than $1. Try again. ";
            }
            else
            {
                cout << " The number of coins have to be greater than 0. Try again.";
                
            }
        }
    }
    //Exit program!
    return 0;
}