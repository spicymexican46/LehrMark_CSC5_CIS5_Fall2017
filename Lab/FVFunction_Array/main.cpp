/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Nov 20th, 2017, 8:35 AM
 * Purpose:  Savings Function with Arrays
 *           Display of results
 *           Illustrates potential of Off by 1 Error
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //Math Library
#include <iomanip>      //Format Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const int CNVPRCT = 100;//Conversion to percent

//Function Prototypes
void save(float,float,int,float []);
void dsply(const float [],int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float balance,intRate;
    int nCmPrds;
    const int SIZE=2*nCmPrds;
    float futrVal[SIZE];
    
    //Initialize Variables
    balance=100;//$100 initial balance
    intRate=8.0f/CNVPRCT;//Percentage interest per compounding period
    nCmPrds=0.72f/intRate;//By the rule of 72, how long it takes to double pv

    //Calculate the future value array
    save(balance,intRate,nCmPrds,futrVal);
    
    
    //Display/Output all pertinent variables
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Initial Balance = $"<<balance<<endl;
    cout<<"Interest Rate = "<<intRate*CNVPRCT<<"%"<<endl;
    cout<<"Number of compounding periods - rule of 72 = "
            <<nCmPrds<<" Years"<<endl<<endl;
    dsply(futrVal,nCmPrds);
    
    //Exit the program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                       Display Function
//Description:
//  Display of Savings Account Content
//Inputs:
//    fv - Future Value array
//Output:
//    fv - Future Value Table
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890


void dsply(const float fv[],int nYears){
    cout<<"Future Value Table"<<endl;
    cout<<"Year Savings $"<<endl;
    for(int year=0;year<=nYears;year++){
        cout<<setw(4)<<year<<setw(10)<<fv[year]<<endl;
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                       Savings Function
//Description:
//  Simple compound interest function where FV=PV*(1+i)^n
//Inputs:
//    pv - present value $'s
//     i - interest rate  %/100
//     n - compounding periods yrs
//Output:
//    fv - future value array
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void save(float pv,float i,int n,float fv[]){
    fv[0]=pv;
    for(int year=1;year<=n;year++){
        fv[year]=fv[year-1]*(1+i);
    }
}