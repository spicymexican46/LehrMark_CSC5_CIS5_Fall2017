/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 18th, 2017, 9:05 AM
 * Purpose:  Menu with functions
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //Math Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const char  DOLLAR =100;      //Dollar contains 100 pennies
const char  QUARTER= 25;      //Quarter contains 25 pennies
const char  DIME   = 10;      //Dime contains 10 pennies
const char  NICKEL =  5;      //Nickel contains 5 pennies
const float HLFPNY =0.005f;   //Half penny round up
const char  CNVPNY =100;      //Conversion to a penny

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void menu();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    //Loop the Menu and Problems
    do{
        //Input Data/Variables
        menu();
        cin>>choice;
        //Process or map the inputs to the outputs
        switch(choice){
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            case 5:prob5();break;
            case 6:prob6();break;
            case 7:prob7();break;
            case 8:prob8();break;
            case 9:prob9();break;
            default:{
                cout<<"Exiting, have a great day!"<<endl;
            }
        }
    }while(choice>0&&choice<10);
    //Exit the program
    return 0;
}

void prob1(){
    //Declare Variables
    float pop,incPop,popPow;
    int nYears;
    
    //Input Data/Variables
    cout<<"Calculate the increase in population over time"<<endl;
    cout<<"Input the population, percentage yearly increase and "<<endl;
    cout<<"The number of years"<<endl;
    cin>>pop>>incPop>>nYears;
    
    //Process or map the inputs to the outputs
    popPow=pop*pow((1+incPop/100),nYears);
    for(int year=1;year<=nYears;year++){
        pop*=(1+incPop/100.0f);
    }
    
    //Display/Output all pertinent variables
    cout<<"The resulting populaiton in "<<nYears<<" years = "
            <<pop<<" people not poop"<<endl;
    cout<<"  Same result population in "<<nYears<<" years = "
            <<popPow<<" people not poop"<<endl;
}

void prob2(){
    //Declare Variables
    float price,tndrd;
    unsigned short change;
    unsigned char nDlrs,nQtrs,nDimes,nNckls;
    
    //Initialize Variables
    
    //Input Data/Variables
    cout<<"The Vending Machine Problem calculates the change"<<endl;
    cout<<"Input the Price of the Product and the Amount Tendered"<<endl;
    cin>>price>>tndrd;
    
    //Calculate the change
    change=(tndrd-price+HLFPNY)*CNVPNY;//Accounts for float inaccuracy
    nDlrs=(change-change%DOLLAR)/DOLLAR;
    change-=(nDlrs*DOLLAR);
    nQtrs=(change-change%QUARTER)/QUARTER;
    change-=(nQtrs*QUARTER);
    nDimes=(change-change%DIME)/DIME;
    change-=(nDimes*DIME);
    nNckls=(change-change%NICKEL)/NICKEL;
    change-=(nNckls*NICKEL);
    change=nDlrs*DOLLAR+nQtrs*QUARTER+nDimes*DIME+nNckls*NICKEL;
    
    
    //Display/Output all pertinent variables
    cout<<"The change in Pennies  = "<<change<<endl;
    cout<<"The number of Dollars  = "<<static_cast<int>(nDlrs)<<endl;
    cout<<"The number of Quarters = "<<static_cast<int>(nQtrs)<<endl;
    cout<<"The number of Dimes    = "<<static_cast<int>(nDimes)<<endl;
    cout<<"The number of Nickels  = "<<static_cast<int>(nNckls)<<endl;
}

void prob3(){
    cout<<"You are in Problem 3"<<endl;
}

void prob4(){
    cout<<"You are in Problem 4"<<endl;
}

void prob5(){
    cout<<"You are in Problem 5"<<endl;
}

void prob6(){
    cout<<"You are in Problem 6"<<endl;
}

void prob7(){
    cout<<"You are in Problem 7"<<endl;
}

void prob8(){
    cout<<"You are in Problem 8"<<endl;
}

void prob9(){
    cout<<"You are in Problem 9"<<endl;
}

void menu(){
    //Input Data/Variables
    cout<<"Choose from the Menu"<<endl;
    cout<<"1. Problem 1 Population"<<endl;
    cout<<"2. Problem 2 Vending Machine Change"<<endl;
    cout<<"3. Problem 3"<<endl;
    cout<<"4. Problem 4"<<endl;
    cout<<"5. Problem 5"<<endl;
    cout<<"6. Problem 6"<<endl;
    cout<<"7. Problem 7"<<endl;
    cout<<"8. Problem 8"<<endl;
    cout<<"9. Problem 9"<<endl;
}