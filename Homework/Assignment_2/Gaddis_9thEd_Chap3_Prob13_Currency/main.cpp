/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 28th, 2018, 10:19 PM
 * Purpose:  Currency.
 *           Write a program that will convert US dollars to yen and euros.
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
    const double yen = 110.69;
    const double euro = 00.86;
    double usd, Yen, Euro;
    //Initial Variables
    //yen = 110.69;
    //euro = 00.86;
    //Map/Process Inputs to Outputs
    cout<<setprecision(2)<<fixed;
    cout<<"Enter dollar amount: ";
    cin>>usd;
    Yen = usd * yen;
    Euro = usd * euro;
    cout<<"The conversion is: \n";
    cout<<"$"<<usd<<" = "<<Yen<<" yen \n";
    cout<<"$"<<usd<<" = "<<Euro<<" euros \n";
    //Exit program!
    return 0;
}