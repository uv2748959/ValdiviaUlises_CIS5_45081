/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 23rd, 2018, 6:35 PM
 * Purpose:  Average of Values
 *           Find the average of a group of numbers.
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
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float total;
    float sum;
    //Initial Variables
    a = 28;
            b = 32;
            c = 37;
            d = 24;
            e = 33;
            f = 5;
            total=a+b+c+d+e;
            sum=total/f;
    //Map/Process Inputs to Outputs
    cout << "The average of the values is " << sum << ".";
    //Exit program!
    return 0;
}