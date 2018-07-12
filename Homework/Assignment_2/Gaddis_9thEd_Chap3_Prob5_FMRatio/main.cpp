/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 28th, 2018, 10:36 PM
 * Purpose:  Male and Female Percentage
 *           Write a program that displays the percent of males and females.
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
    float M, F, total;
    double mper, fper;
    //Initial Variables

    //Map/Process Inputs to Outputs
    cout<<"How many male students? ";
    cin>>M;
    cout<<"How many female students? ";
    cin>>F;
    total = M + F;
    mper = (M/total) * 100;
    fper = (F/total) * 100;
    cout<<mper<<"% are male students."<<endl<<fper<<"% are female students.";
    //Exit program!
    return 0;
}