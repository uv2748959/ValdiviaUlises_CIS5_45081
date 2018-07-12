/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 23rd, 2018, 6:17 PM
 * Purpose:  Restaurant Bill
 *           Total payment of a restaurant including a tip.
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
    float meal; //the meal alone without tax
    float tax; //the tax of the meal
    float tip; //tip of the meal
    float totaltax; //meal with taxes
    float total; // meal with taxes and tip included
    //Initial Variables
    meal = 88.67;
    tax = .0675;
    tip = .2;
    totaltax = meal*tax+meal;
    total = totaltax*tip+totaltax;
    //Map/Process Inputs to Outputs
    cout << "The total meal including tip is $"<<total<<".";
    //Exit program!
    return 0;
}