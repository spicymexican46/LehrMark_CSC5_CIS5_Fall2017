/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Sept 14th, 2017, 11:35 PM
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //Mathematical Functions
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const float CNVPRCT=100.0f;//Conversion to Percent 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and Variables
    //Known Values
    float pv;       //Present Value in $'s
    unsigned char i;//Interest rate in % per year
    //Values to be computed
    unsigned char n;//Number of compounding periods in yrs
    float fvPow;    //Future value calculated in $'s using power function
    float fvExpLg;  //Future value calculated in $'s using Exp and Log functions
    
    //Initialize Variables
    pv=1e2f;    //$100.00
    i=6;        //6%/year

    //By the rule of 72 the future value or savings 
    n=72/i;                     //Rule of 72
    float intr=(1+i/CNVPRCT);   //Intermediate percent calculation
    fvPow=pv*pow(intr,n);       //Future Value with power
    fvExpLg=pv*exp(n*log(intr));//Future Value with exp/log
    
    //Display/Output all pertinent variables
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"The interest rate = "
            <<static_cast<int>(i)<<" %/year"<<endl;
    cout<<"The number of compounding periods = "
            <<static_cast<int>(n)<<" years"<<endl;
    cout<<"The Future Value using Pow function = $"
            <<fvPow<<endl;
    cout<<"The Future Value using Exp/Log functions = $"
            <<fvExpLg<<endl;
    
    //Exit the program
    return 0;
}