/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on July 3rd, 2018, 9:50 PM
 * Purpose:  Mass and Weight
 *           Write a program that asks the user to enter an object's mass, then
 * calculate and displays its weight.
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
    double m, w;
    //Initial Variables

    //Map/Process Inputs to Outputs
    cout<<"Enter an objects mass: ";
    cin>>m;
    w=m*9.8;
    if(w > 1000)
    {
        cout<<"The mass is: "<<w<<" newtons";
    }
    if(w < 10)
    {
        cout<<"The mass is: "<<w<<" newtons";
    }
    if(w >= 10 && w <= 1000)
    {
        cout<<"The mass is: "<<w<<" newtons";
    }
    //Exit program!
    return 0;
}