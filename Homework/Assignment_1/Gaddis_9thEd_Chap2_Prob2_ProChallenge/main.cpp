/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 23rd, 2018, 5:31 PM
 * Purpose:  Sales Preditction
 *           Finding 58 percent of $8.6 million.
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
    int totalprofits;
    float percenttaken;
    int netprofit;
    //Initial Variables
    totalprofits = 8600000;
    percenttaken = 0.56;
    netprofit = totalprofits*percenttaken;
    //Map/Process Inputs to Outputs
    cout << "The company will generate " << netprofit << ".";
    //Exit program!
    return 0;
}