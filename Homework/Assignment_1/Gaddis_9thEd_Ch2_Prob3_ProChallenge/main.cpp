/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 23rd, 2018, 5:55 PM
 * Purpose:  Sales Tax
 *           Find the total sales tax of a purchase.
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
    int purchase; //the purchase of the product is $95.
    float statetax; //state sales tax is 4%.
    float countytax; //country sales tax is 2%
    float total; // purchase with the both sales taxes included.
    //Initial Variables
    purchase = 95;
            statetax = .04;
            countytax = .02;
            total = purchase*statetax+countytax*purchase+purchase;
    //Map/Process Inputs to Outputs
            cout << "The purchase total amount is " << total;
    //Exit program!
    return 0;
}