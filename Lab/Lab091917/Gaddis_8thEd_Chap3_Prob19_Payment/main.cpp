/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Sept 19th, 2017, 12:32 PM
 * Purpose:  Loan Payment Calculator
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //For the power function
#include <iomanip>   //Formatting Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int CNVMPYR=12; //12 months per year
const int CNVPERC=100;//Conversion to percent

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float loanAmt, intRate, monPay, totPay, totInt;
    unsigned char nCPer;//Number of compounding periods -> months
    
    //Initialize variables
    loanAmt=1e4f;  //$10,000
    intRate=1.2e1f;//12 percent per year
    nCPer=36;      //36 months
    
    //Input data Convert to percent / year to decimal / month
    intRate/=(CNVMPYR*CNVPERC);//1/12 for months and 1/100 for decimal interest
    
    //Map inputs to outputs or process the data
    float temp=pow(1+intRate,nCPer);     //(1+r)^n
    monPay=intRate*temp*loanAmt/(temp-1);//(r*(1+r)^n)*L/((1+r)^n-1)
    //cout<<fixed<<setprecision(13)<<showpoint;
    //cout<<"Monthly Payment = $"<<monPay<<endl;
    monPay=static_cast<int>(monPay*100)/100.0f;//Convert to Pennies and back
    //cout<<"Monthly Payment = $"<<monPay<<endl;
    totPay=monPay*nCPer;
    totInt=totPay-loanAmt;
    
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Amount = :                 $"<<loanAmt<<endl;
    cout<<"Interest Rate = :                "<<setw(8)<<intRate*CNVPERC<<"%/month"<<endl;
    cout<<"Number of Compounding Periods =  "<<setw(5)
            <<static_cast<int>(nCPer)<<" months"<<endl;
    cout<<"Monthly Payment =               $"<<setw(8)<<monPay<<endl;
    cout<<"Book is wrong see why we are correct!"<<endl;
    cout<<"Total Amount Pay =              $"<<totPay<<endl;
    cout<<"Total Interest Paid =           $"<<setw(8)<<totInt<<endl;
    
    //Exit stage right!
    return 0;
}