/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 28th, 2018, 8:15 PM
 * Purpose:  Math Tutor
 *           Write a program that can be used as a math tutor for a young student.
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
    double num1;
    double num2;
    double sum;
    char ch;
    unsigned seed = time(0);
    srand(seed);
    //Initial Variables
    num1 = 100 + rand()%999;
    num2 = 100 + rand()%999;
    sum = num1 + num2;
    //Map/Process Inputs to Outputs
    cout<<setw(5)<<num1<<endl;
    cout<<setw(5)<<num2<<"+ \n";
    cout<<setw(5)<<"------------"<<endl<<endl;;
    cout <<"Enter a character to see the answer: ";
    ch =cin.get();
    cout<<setw(5)<<sum<<endl<<endl;
    //Exit program!
    return 0;
}