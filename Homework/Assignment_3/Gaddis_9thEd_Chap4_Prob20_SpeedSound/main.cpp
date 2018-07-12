/* 
 * File:   main.cpp
 * Author: Ulises Valdivia
 * Created on July 3rd, 2018, 10:30 PM
 * Purpose:  The Speed of Sound
 *           Write a program that displays a menu allowing the user to select air, water, or steel.
 * The program should display the amount of time it will take.
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <string>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    double dis, time;
    int choi;
    //Initial Variables
    const double Air = 1100, Water = 4900, Steel = 16400;
    const int Air_Choi = 1, Water_Choi = 2, Steel_Choi = 3;
    //Map/Process Inputs to Outputs
    cout << "\t\tThe Speed of Sound: Menu \n\n" << "1. Air \n" << "2. Water \n" << "3. Steel \n\n" << "Enter your choice: ";
    cin >> choi;
    cout << fixed << showpoint << setprecision(3);
    switch(choi)
    {
        case Air_Choi:
            cout << "Enter the distance: ";
            cin >> dis;
            if(dis < 0)
            {
                cout << "Distance can't be less than 0.\n\n" << "Enter the distance again: ";
                cin >> dis;
            }
            time = dis/Air;
            cout << "It will take about " << time << "seconds. \n\n";
            break;
            
        case Water_Choi:
            cout << "Enter the distance: ";
            cin >> dis;
            if(dis < 0)
            {
                cout << "Distance can't be less than 0. \n\n" << "Enter the distance again: ";
                cin >> dis;
            }
            time = dis/Water;
            cout << "It will take about " << time << "seconds. \n\n";
            break;
        case Steel_Choi:
            cout << "Enter the distnace: ";
            cin >> dis;
            if(dis < 0)
            {
                cout << "Distance can't be less than 0. \n\n" << "Enter the distance again: ";
                cin >> dis;
            }
            time = dis/Steel;
            cout << "It will take about " << time << " seconds. \n\n";
        default:
            cout << "The valid choices are 1-3. \n" << "Run the program again.\n\n";
    }
    //Exit program!
    return 0;
}