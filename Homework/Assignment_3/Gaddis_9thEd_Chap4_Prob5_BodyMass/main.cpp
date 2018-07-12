/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on July 3rd, 2018, 9:32 PM
 * Purpose:  Body Mass Index
 *           Write a program that calculates and displays a person's body mass
 * index. BMI = weight X 703 / height2
 * The program should display a message indicating whether the person has optimal
 * weight, underweight, or is overweight.
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cmath>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    double w, h, BMI;
    //Initial Variables

    //Map/Process Inputs to Outputs
    cout << "Enter your weight: ";
    cin >> w;
    cout << "Enter your height: ";
    cin >> h;
    BMI = (w*703)/(h*h);
    if(BMI < 18.5)
        cout << "This person is underweight. ";
    if(BMI >= 18.5 && BMI <=25)
        cout << "This person has optimal weight. ";
    if(BMI > 25)
        cout << "This person is overweight. ";
    
    //Exit program!
    return 0;
}