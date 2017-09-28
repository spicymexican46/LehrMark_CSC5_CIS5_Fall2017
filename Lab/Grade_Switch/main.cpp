/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Sept 28th, 2017, 11:45 AM
 * Purpose:  Grading Assignments
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    signed short score;//Score for assignment 0 to 100
    char grade;
    
    //Initialize Variables with an input
    cout<<"Input the Score from the assignment"<<endl;
    cout<<"A value from 0 to 100"<<endl;
    cin>>score;
    
    //Process by giving the grade
    switch(score/10){
        case 10:{
            switch(score){
                case 100:grade='A';break;
                default: grade='I';
            }
            break;
        }
        case  9:grade='A';break;
        case  8:grade='B';break;
        case  7:grade='C';break;
        case  6:grade='D';break;
        case  5:
        case  4:
        case  3:
        case  2:
        case  1:
        case  0:
            switch(score){
                case 0:grade='F';break;
                default: grade='I';
            }
            break;
        default:grade='I';
    }
    
    //Display/Output all pertinent variables
    cout<<"A score of "<<score<<" gives a grade = "<<grade<<endl;
    
    //Exit the program
    return 0;
}