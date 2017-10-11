/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 11th, 2017, 9:05 PM
 * Purpose:  Fibonacci Sequence While Loop
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int fi,fim1,fim2;
    int valEnd=500000,perLine=10,count=4;
    
    //Initialize Variables
    fim1=fim2=1; //Initialize the sequence
    
    //Process or map the inputs to the outputs
    cout<<fim1<<","<<fim2<<",";
    fi=fim1+fim2;
    cout<<fi<<",";
    //Loop and Print
    while(valEnd>fi){
        fim2=fim1;
        fim1=fi;
        fi=fim1+fim2;
        cout<<fi<<",";
        if(count++%perLine==(perLine-1))cout<<endl;
    }
    
    //Exit the program
    return 0;
}