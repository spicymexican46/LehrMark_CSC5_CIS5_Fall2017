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
    if(score>100){
        grade='I';
    }else if(score>=90){
        grade='A';
    }else if(score>=80){
        grade='B';
    }else if(score>=70){
        grade='C';
    }else if(score>=60){
        grade='D';
    }else if(score>= 0){
        grade='F';
    }else{
        grade='I';
    }
          
    //Display/Output all pertinent variables
    cout<<"A score of "<<score<<" gives a grade = "<<grade<<endl;
    
    //Exit the program
    return 0;
}