/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 23rd, 2017, 8:15 AM
 * Purpose:  All the Ways to write a function
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
float save1(float,float,int);//Power Function
float save2(float,float,int);//Exp/Log Function
float save3(float,float,int);//For-Loop
float save3(float,float,float);//For-Loop but float nCmPrds
float save4(float,float,int);//Recursion
float save5(float,float,int=9);//Defaulted Value
int   save6(float,float,int,float&);//Static as well as reference value


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float balance,intRate;
    int nCmPrds;
    
    //Initialize Variables
    balance=100;//$100 initial balance
    intRate=8.0f/CNVPRCT;//Percentage interest per compounding period
    nCmPrds=0.72f/intRate;//By the rule of 72, how long it takes to double pv
    
    //Display/Output all pertinent variables
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Initial Balance = $"<<balance<<endl;
    cout<<"Interest Rate = "<<intRate*CNVPRCT<<"%"<<endl;
    cout<<"Number of compounding periods - rule of 72 = "
            <<nCmPrds<<" Years"<<endl;
    cout<<"Savings function 1 - Power Function   = $"
            <<save1(balance,intRate,nCmPrds)<<endl;
    cout<<"Savings function 2 - Log/Exp Function = $"
            <<save2(balance,intRate,nCmPrds)<<endl;
    cout<<"Savings function 3 - for-loop         = $"
            <<save3(balance,intRate,nCmPrds)<<endl;
    cout<<"Savings function 4 - Recursive call   = $"
            <<save4(balance,intRate,nCmPrds)<<endl;
    cout<<"Savings function 5 - Defaulted n=9    = $"
            <<save5(balance,intRate)<<endl;
    cout<<"Savings function 3 - for-loop float   = $"
            <<save3(balance,intRate,static_cast<float>(nCmPrds))<<endl;
    float fuVal;
    int nLoop=5;
    for(int i=1;i<nLoop;i++){
        save6(balance,intRate,nCmPrds,fuVal);
    }
    int nCalls=save6(balance,intRate,nCmPrds,fuVal);
    cout<<"Savings 6 was called "<<nCalls<<"x  Future Value = $"<<fuVal<<endl;
    //Exit the program
    return 0;
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
//    fv - future value
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

int save6(float pv,float i,int n,float &fv){
    static int count=0;
    fv=pv;
    for(int year=1;year<=n;year++){
        fv*=(1+i);
    }
    return ++count;
}

float save3(float pv,float i,float n){
    for(int year=1;year<=n;year++){
        pv*=(1+i);
    }
    return pv;
}

float save5(float pv,float i,int n){
    for(int year=1;year<=n;year++){
        pv*=(1+i);
    }
    return pv;
}

float save4(float pv,float i,int n){
    if(n<=0)return pv;
    return save4(pv,i,n-1)*(1+i);
}

float save3(float pv,float i,int n){
    for(int year=1;year<=n;year++){
        pv*=(1+i);
    }
    return pv;
}

float save2(float pv,float i,int n){
    return pv*exp(n*log(1+i));
}

float save1(float pv,float i,int n){
    return pv*pow(1+i,n);
}