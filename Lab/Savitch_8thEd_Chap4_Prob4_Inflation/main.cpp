/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 17th, 2017, 9:05 PM
 * Purpose:  Inflation Calculator
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //Absolute value function
#include <iomanip>      //Formatting Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int yrNow=2017,yrThen;
    double infRate,prNow,prThen;
    
    //Initialize Variables
    
    //Input Data/Variables
    cout<<"This program calculates inflation rate"<<endl;
    cout<<"Year and Price of Original Item"<<endl;
    cout<<"as well as price today"<<endl;
    cin>>yrThen>>prThen>>prNow;
    
    //Process or map the inputs to the outputs
    infRate=.01;
    double delta,prCalc;
    double kGain=.00001,tol=.00000001;
    do{
        prCalc=prThen;
        for(int year=yrThen+1;year<=yrNow;year++){
            prCalc*=(1+infRate);
        }
        delta=(prNow-prCalc)/prNow;
        infRate+=kGain*delta;
    }while(abs(delta)>=tol);
    
    //Display/Output all pertinent variables
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"In "<<yrThen<<"    the price = $"<<setw(11)<<prThen<<endl;
    cout<<"In "<<yrNow<<"    the price = $"<<setw(11)<<prNow<<endl;
    cout<<"The Price calculated = $"<<setw(11)<<prCalc<<endl;
    cout<<"The inflation rate   =  "<<setw(11)<<infRate*100.0f<<"%"<<endl;
    
    //Exit the program
    return 0;
}