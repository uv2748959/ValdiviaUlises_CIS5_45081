/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 24th, 2018, 3:54 PM
 * Purpose:  Areas of Rectangles
 *           Write a program that asks for the length and width of two rectangles.
 * The program should tell the user which rectangle has the greater area, or if
 * the areas are the same.
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
    double len1, len2;
    double wid1, wid2;
    double area1, area2;
    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout << "Enter the length for the first rectangle: ";
    cin >> len1;
    cout << "Enter the width for the first rectangle: ";
    cin >> wid1;
    cout << "Enter the length for the second rectangle: ";
    cin >> len2;
    cout << "Enter the width for the second rectangle: ";
    cin >> wid2;
    area1 = len1*wid2;
    area2 = len2*wid2;
    if(area1>area2)
        cout << "The area of the first rectangle is greater than the area of the second rectangle.";
    else if(area2>area1)
        cout << "The area of the second rectangle is greater than the first rectangle. ";
    else if(area1==area2)
        cout << "The area of both rectangles is the same. ";
    //Exit program!
    return 0;
}