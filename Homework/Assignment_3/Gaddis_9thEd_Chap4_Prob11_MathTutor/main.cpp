/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on July 3rd, 2018, 10:10 PM
 * Purpose:  Math tutor
 *           Write a program that can be used as a math tutor for a young student.
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <ctime>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num1, num2, sum, ans;
    
    //Initial Variables

    //Map/Process Inputs to Outputs
    unsigned seed = time(0);
    srand(seed);
    num1 = 100 + rand()%999;
    num2 = 100 + rand()%999;
    sum = num1 + num2;
    cout << setw(5) << num1 << endl;
    cout << setw(5) << num2 << " + \n";
    cout << setw(5) << "________\n\n";
    cout << "Answer: ";
    cin >> ans;
    if(ans == sum)
        cout << "The answer is CORRECT.\n\n";
    else
        cout << "The answer is INCORRECT. The correct answer is: " << sum << "\n\n";
    //Exit program!
    return 0;
}