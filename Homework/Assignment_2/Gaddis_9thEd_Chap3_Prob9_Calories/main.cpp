/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on June 24th, 2018, 3:54 PM
 * Purpose:  How Many Calories?
 *           Write a program that asks the user to input how many cookies he ate, then reports how many total calories were consumed.
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
    //10 cookies = 300 calories, so each cookie is 30 calories
    int cookie; // How many cookies were eaten
    int cal; // Serving size
    //Initial Variables
    
    //Map/Process Inputs to Outputs
    cout<<"Enter amount of cookies you ate:"<<endl;
    cin>>cookie;
    cal=cookie*30;
    cout<<"You ate "<<cal<<" calories"<<endl;
    //Exit program!
    return 0;
}