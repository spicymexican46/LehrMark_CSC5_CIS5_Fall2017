/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on November 14th, 2017, 11:25 AM
 * Purpose:  Home Calculator Version 1
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //Format Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const int CNVMNYR=12; //Conversion Months to Year
const int CNVPRCT=100;//Conversion to Percent

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pPrice, pDown, loanAmt, intRate, mnPmt;
    int nMonths;
    
    //Initialize Variables
    pPrice=350000.00f;          //Purchase Price  = $350k
    pDown=0.20f;                //Percentage Down = 20%
    loanAmt=pPrice*(1-pDown);   //Loan Amount $'s
    intRate=0.05f;              //Interest Rate / Year
    mnPmt=1503.11f;             //Monthly Payment $'s
    nMonths=360;                //Number of months in loan payment
    
    //Process or map the inputs to the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Home Amortization Table"<<endl<<endl;
    cout<<"Purchase Price = $"<<pPrice<<endl;
    cout<<"Percent Down   =      "<<pDown*CNVPRCT<<"%"<<endl;
    cout<<"Loan Amount    = $"<<loanAmt<<endl;
    cout<<"Interest Rate  =       "<<intRate*CNVPRCT<<"%"<<endl;
    cout<<"Monthly Payment= $  "<<mnPmt<<endl<<endl;
    cout<<"Month     Loan Amount     Int Paid    Payment"<<endl;
    for(int month=0;month<nMonths;month++){
        float intAccm=intRate/CNVMNYR*loanAmt;//Interest Accrued per month
        cout<<setw(5)<<month<<setw(16)<<loanAmt<<setw(13)<<intAccm
                <<setw(11)<<mnPmt<<endl;
        loanAmt+=(intAccm-mnPmt);
    }
    cout<<endl;
    cout<<"Last Payment = $"<<(mnPmt+loanAmt)<<endl;
    cout<<"Total Paid for Loan = $"<<nMonths*mnPmt+loanAmt<<endl;
    cout<<"Total Paid for Home = $"<<pPrice*pDown+nMonths*mnPmt+loanAmt<<endl;
    
    //Exit the program
    return 0;
}