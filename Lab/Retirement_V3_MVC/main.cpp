/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on November 9th, 2017, 12:15 PM
 * Purpose:  Retirement Calculator MVC
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //Format Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=51;
    int strtYr,byYear[SIZE];
    float retAcct[SIZE+1]={},intErnd[SIZE]={},depAmt[SIZE]={};
    float salary, deposit, invRate, savings;
    
    //Initialize Variables
    salary=100000;          //$100k
    invRate=0.06;           //5%
    savings=salary/invRate; //Required savings to retire $'s
    deposit=0.20;           //10%/year
    strtYr=2022;
    
    //Process or map the inputs to the outputs
    for(int indx=0;indx<SIZE;indx++){
        byYear[indx]=indx+strtYr;
        intErnd[indx]=invRate*retAcct[indx];//Interest earned for the year
        depAmt[indx]=deposit*salary; //Yearly deposit
        retAcct[indx+1]=retAcct[indx]+intErnd[indx]+depAmt[indx];
    }
    
    //Display the Table
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Retirement Table"<<endl;
    cout<<"Salary          =  $ "<<salary<<endl;
    cout<<"Investment Rate =        "<<invRate*100.0f<<"%"<<endl;
    cout<<"Required Savings = $"<<savings<<endl;
    cout<<"Deposit Amount   = $  "<<deposit*salary<<endl<<endl;
    cout<<"Year      Savings  Int Earned    Deposit"<<endl;
    int indx;
    for(indx=0;indx<SIZE&&retAcct[indx]<savings;indx++){
        cout<<setw(4)<<byYear[indx]<<setw(13)<<retAcct[indx]<<setw(12)
                <<intErnd[indx]<<setw(11)<<depAmt[indx]<<endl;
    }
    cout<<endl;
    cout<<"You hit your Savings Goal in Year = "<<byYear[indx]<<endl;
    cout<<"With an account total = $"<<retAcct[indx]<<endl;
    
    //Exit the program
    return 0;
}